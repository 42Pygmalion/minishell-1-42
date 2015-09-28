/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <lboudaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 22:35:59 by lboudaa           #+#    #+#             */
/*   Updated: 2015/01/23 18:57:06 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t		i;
	size_t		j;
	char		*dst;

	dst = NULL;
	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i])
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while (s1[i + j] == s2[j] && s2[j])
				j++;
			dst = (char *)&s1[i];
			if (s2[j] == '\0')
				return (dst);
		}
		i++;
	}
	return (NULL);
}
