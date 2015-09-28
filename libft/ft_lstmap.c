/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/18 21:48:53 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/19 22:35:18 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	if ((new = (t_list*)malloc(sizeof(*new))))
		new = f(lst);
	else
		return (NULL);
	if (lst->next != NULL)
		new->next = ft_lstmap(lst->next, *f);
	else
		new->next = NULL;
	return (new);
}
