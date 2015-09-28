/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_epur_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/19 19:28:01 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/19 22:35:51 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_epur_str(char *str)
{
	int			i;
	int			j;
	char		*t;

	i = 0;
	j = 0;
	if (str)
	{
		t = (char *)malloc(sizeof(char) * ft_nospace_strlen(str) + 1);
		while (str[j] && (str[j] == ' ' || str[j] == '\t'))
			j++;
		while (str[j])
		{
			while ((str[j] == ' ' || str[j] == '\t') && str[j++])
			{
				if (str[j] && str[j] != ' ' && str[j] != '\t')
					t[i++] = ' ';
			}
			if (str[j] && str[j] != '\n')
				t[i++] = str[j++];
		}
		t[i] = '\0';
		return (t);
	}
	return (NULL);
}
