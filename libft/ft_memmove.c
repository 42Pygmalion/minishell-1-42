/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <lboudaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 22:24:36 by lboudaa           #+#    #+#             */
/*   Updated: 2013/12/01 17:59:53 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char			*ss1;
	const char		*ss2;

	ss1 = s1;
	ss2 = s2;
	if (ss2 <= ss1)
	{
		ss1 = ss1 + (n - 1);
		ss2 = ss2 + (n - 1);
		while (n--)
			*ss1-- = *ss2--;
	}
	else
		ft_memcpy(s1, s2, n);
	return (s1);
}
