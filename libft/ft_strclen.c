/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 17:04:26 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/15 17:07:38 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strclen(char const *s, char c)
{
	size_t	length;

	length = 0;
	if (!s || !*s)
		return (0);
	while (s[length] && s[length] != c)
		length++;
	return (length);
}
