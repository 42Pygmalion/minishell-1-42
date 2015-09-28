/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 16:10:38 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/16 20:20:42 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		div;

	i = 0;
	div = 1;
	str = (char *)malloc(sizeof(char) * ft_intlen(n) + 1);
	if (n == -2147483648)
		return ("-2147483648");
	else if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	while (n / div > 9)
		div *= 10;
	while (div != 0)
	{
		str[i++] = (n / div) + 48;
		n %= div;
		div /= 10;
	}
	str[i] = '\0';
	return (str);
}
