/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/19 18:35:32 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/19 22:34:17 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_rotone(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] < 'z')
			str[i] = str[i] + 1;
		else if (str[i] >= 'A' && str[i] < 'Z')
			str[i] = str[i] + 1;
		else if (str[i] == 'Z' || str[i] == 'z')
			str[i] = str[i] - 25;
	}
	return (str);
}
