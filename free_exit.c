/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 15:35:43 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/22 15:35:46 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

void	free_exit(t_lazy **shell)
{
	int		error_status;

	error_status = 0;
	while (*(*shell)->env)
		free(*(*shell)->env++);
	if ((*shell)->pwd)
		free((*shell)->pwd);
	if ((*shell)->expwd)
		free((*shell)->expwd);
	while (*(*shell)->path)
		free(*(*shell)->path++);
	if ((*shell)->line)
	{
		if (ft_strncmp(ft_strlower((*shell)->line), "exit", 5) == 0)
			error_status = ft_atoi((*shell)->args[1]);
		free((*shell)->line);
	}
	while (*(*shell)->args)
		free(*(*shell)->args++);
	while (*(*shell)->cmd)
		free(*(*shell)->cmd++);
	(*shell)->pid = 0;
	exit(error_status);
}
