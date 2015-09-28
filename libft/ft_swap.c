/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/19 18:09:23 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/19 23:13:57 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_swap(void *ptra, void *ptrb)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	swap;

	a = (unsigned char *)ptra;
	b = (unsigned char *)ptrb;
	swap = *a;
	*a = *b;
	*b = swap;
}
