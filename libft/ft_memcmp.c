/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <lboudaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 22:52:36 by lboudaa           #+#    #+#             */
/*   Updated: 2015/01/23 17:53:45 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char		*ss1;
	unsigned const char		*ss2;

	ss1 = s1;
	ss2 = s2;
	while (n)
	{
		if (*ss1 != *ss2)
			return (*ss1 - *ss2);
		n--;
		ss1++;
		ss2++;
	}
	return (0);
}
