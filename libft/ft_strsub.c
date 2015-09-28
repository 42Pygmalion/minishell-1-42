/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 19:00:17 by lboudaa           #+#    #+#             */
/*   Updated: 2015/01/23 19:06:12 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		end;
	char		*sub;
	int			i;

	i = 0;
	end = start + len;
	if ((sub = (char *)malloc(len + 1)))
	{
		while (start < end)
			sub[i++] = s[start++];
		sub[i] = '\0';
		return (sub);
	}
	return (NULL);
}
