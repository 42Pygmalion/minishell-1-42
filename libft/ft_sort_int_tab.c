/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/19 18:04:43 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/19 18:06:59 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_int_tab(int *tab, unsigned int size)
{
	int					tmp;
	unsigned int		i;

	i = 0;
	while (i < size)
	{
		i = 0;
		while (ft_needs_sort(tab[i], tab[i + 1]) && i < size)
			i++;
		if (!(ft_needs_sort(tab[i], tab[i + 1])) && i < size)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
		}
	}
}
