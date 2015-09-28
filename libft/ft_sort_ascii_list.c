/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_ascii.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/20 23:22:30 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/20 23:28:07 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_ascii_list(t_list *l)
{
	t_list	*tmp;
	t_list	*beg;
	char	*tmp2;

	tmp = l;
	beg = l;
	while (l)
	{
		tmp = l->next;
		while (tmp)
		{
			if (ft_strcmp(tmp->content, l->content) < 0)
			{
				tmp2 = tmp->content;
				tmp->content = l->content;
				l->content = tmp2;
			}
			tmp = tmp->next;
		}
		l = l->next;
	}
	l = beg;
}
