/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <lboudaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 22:48:22 by lboudaa           #+#    #+#             */
/*   Updated: 2015/01/22 15:23:19 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cbis;
	unsigned int	i;

	i = 0;
	cbis = c;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == cbis)
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}
