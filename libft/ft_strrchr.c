/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <lboudaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:58:43 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/14 17:55:21 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 1;
	while (s[i])
		i++;
	while (1)
	{
		if (s[i] == c)
		{
			p = &((char *)s)[i];
			return (p);
		}
		if (!i)
			break ;
		i--;
	}
	return (0);
}
