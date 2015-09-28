/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 18:06:08 by lboudaa           #+#    #+#             */
/*   Updated: 2015/01/23 18:58:11 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	if ((ptr = (void *)malloc(size)))
	{
		ft_bzero(ptr, size);
		return (ptr);
	}
	else
		return (NULL);
}
