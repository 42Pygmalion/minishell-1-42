/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/04 14:45:55 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/14 23:13:04 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len;
	char	*str;

	i = -1;
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	while (s1[++i])
		str[i] = s1[i];
	len = i;
	i = 0;
	while (s2[i])
		str[len++] = s2[i++];
	str[len] = '\0';
	return (str);
}
