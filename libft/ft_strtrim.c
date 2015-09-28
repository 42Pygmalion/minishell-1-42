/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 23:24:13 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/15 19:23:47 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		len;
	int		max;

	i = 0;
	len = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
		len--;
	max = len;
	len = len - i;
	str = (char *)malloc(sizeof(char) * (len + 1));
	len = 0;
	while (i <= max)
		str[len++] = s[i++];
	str[max + 1] = '\0';
	return (str);
}
