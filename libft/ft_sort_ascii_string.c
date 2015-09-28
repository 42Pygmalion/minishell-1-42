/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_ascii_string.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/20 23:25:36 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/20 23:29:10 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_sort_ascii_string(char **av, int ac)
{
	int		i;
	int		j;
	char	*tmp;

	i = av[1][0] == '-' ? 2 : 1;
	while (i < ac)
	{
		j = av[1][0] == '-' ? 2 : 1;
		while (j < ac)
		{
			if (av[i][0] != '-' && ft_strcmp(av[i], av[j]) < 0)
			{
				tmp = av[i];
				av[i] = av[j];
				av[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
