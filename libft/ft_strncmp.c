/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <lboudaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 22:28:17 by lboudaa           #+#    #+#             */
/*   Updated: 2015/01/22 16:41:21 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (n--)
	{
		if (*s1 != *s2)
			return (*(unsigned char*)(s1) - *(unsigned char*)(s2));
		if (!*s1 || !*s2)
			break ;
		s1++;
		s2++;
	}
	return (0);
}
