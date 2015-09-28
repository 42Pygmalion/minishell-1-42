/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <lboudaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 21:16:12 by lboudaa           #+#    #+#             */
/*   Updated: 2015/01/22 15:22:29 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		r;
	int		positive;

	i = 0;
	r = 0;
	positive = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			positive = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		r = r * 10 + (str[i] - 48);
		i++;
	}
	return (r * positive);
}
