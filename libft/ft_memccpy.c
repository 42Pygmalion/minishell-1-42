/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <lboudaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:49:19 by lboudaa           #+#    #+#             */
/*   Updated: 2015/01/23 18:38:52 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			i;
	unsigned char	b;
	unsigned char	*p;

	if (s1 == NULL || s2 == NULL || n == 0)
		return (NULL);
	i = 0;
	b = c;
	while (i < n && ((unsigned char *)s2)[i] != b)
	{
		((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
		i++;
	}
	if (i != n)
	{
		((unsigned char *)s1)[i] = b;
		return (&((unsigned char *)s1)[i + 1]);
	}
	if ((i == n && ((unsigned char *)s2)[i] != b))
		return (NULL);
	else
	{
		p = &((unsigned char *)s1)[i];
		return (p);
	}
}
