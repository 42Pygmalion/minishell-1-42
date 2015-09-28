/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 20:35:16 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/16 20:20:23 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_reverse(char *str)
{
	int		i;
	char	*dst;
	int		len;

	i = 0;
	len = ft_strlen(str) - 1;
	dst = (char *)malloc(sizeof(char) * len + 1);
	while (len >= 0)
		dst[i++] = str[len--];
	dst[i] = '\0';
	return (dst);
}
