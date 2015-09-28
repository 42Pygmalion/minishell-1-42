/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <lboudaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 17:08:40 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/08 17:57:04 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		next_interruption(char *tab)
{
	char	*cpy;

	cpy = tab;
	if (cpy)
	{
		while (*cpy)
		{
			if (*cpy == '\n')
				return (cpy - tab + 1);
			cpy++;
		}
	}
	return (-1);
}

static char		*get_next_limit(char **tab, int *flag)
{
	int		i;
	char	*newline;

	if ((i = next_interruption(*tab)) == -1)
		return (NULL);
	if (!(newline = ft_strnew(i - 1)))
	{
		*flag = -1;
		return (NULL);
	}
	newline = ft_strsub(*tab, 0, i - 1);
	while (**tab != '\n')
		(*tab)++;
	(*tab)++;
	return (newline);
}

static char		*make_sure(int *ret, char **tab, char **buf)
{
	char	*stand_in;

	stand_in = NULL;
	if (*ret == 0)
	{
		stand_in = ft_strdup(*tab);
		*tab = 0;
		free(*buf);
	}
	return (stand_in);
}

static char		*join_refresh(char **s1, char const *s2)
{
	char	*stand_in;

	if (*s1 == NULL)
	{
		stand_in = ft_strdup(s2);
		return (stand_in);
	}
	stand_in = ft_strnew(ft_strlen(*s1) + ft_strlen(s2));
	if (stand_in != NULL)
	{
		stand_in = ft_strcpy(stand_in, *s1);
		*s1 = 0;
		return (ft_strcat(stand_in, s2));
	}
	return (NULL);
}

int				get_next_line(int const fd, char **line)
{
	int				ret;
	static char		*tab = NULL;
	char			*buf;
	int				flag;

	flag = 0;
	buf = ft_strnew(BUFF_SIZE);
	if (line == NULL)
		return (-1);
	if (!tab)
		tab = ft_strnew(1);
	while (!(*line = get_next_limit(&tab, &flag)))
	{
		if (flag < 0 || !tab || !buf)
			return (-1);
		ret = read(fd, buf, BUFF_SIZE);
		buf[ret] = '\0';
		if (!(ft_strcmp(buf, "\0")) || (*line = make_sure(&ret, &tab, &buf)))
			return (0);
		if (ret < 0)
			return (-1);
		tab = join_refresh(&tab, buf);
	}
	free(buf);
	return (1);
}
