/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nospace_strlen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/19 19:31:27 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/19 19:33:46 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_nospace_strlen(char *str)
{
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i])
	{
		if (str[i] && (str[i] == ' ' || str[i] == '\t'))
		{
			while (str[i] && (str[i] == ' ' || str[i] == '\t'))
				i++;
			if (str[i])
				size++;
		}
		if (str[i])
		{
			i++;
			size++;
		}
	}
	return (size);
}
