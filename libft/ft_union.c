/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/19 18:13:30 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/19 19:37:51 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		already(char c, char *str, int position)
{
	while (str[position])
	{
		if (str[--position] == c)
			return (1);
	}
	return (0);
}

void			ft_union(char *s1, char *s2)
{
	static int		i = -1;

	while (s1[++i])
	{
		if (!already(s1[i], s1, i))
			write(1, &s1[i], 1);
	}
	i = -1;
	while (s2[++i])
	{
		if (!already(s2[i], s2, i))
		{
			if (!already(s2[i], s1, ft_strlen(s1)))
				write(1, &s2[i], 1);
		}
	}
	write(1, "\n", 1);
}
