/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 15:36:55 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/22 15:36:58 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

int		main(int ac, char **av, const char **environ)
{
	int					i;
	t_lazy				*shell;

	(void)ac;
	(void)av;
	i = 0;
	if ((shell = (t_lazy *)malloc(sizeof(t_lazy))))
	{
		shell->pid = 1;
		env_cpy(environ, &shell);
		shell->pwd = get_pwd();
		shell->expwd = NULL;
		while (shell->pid)
			shell = ft_sh1(shell);
	}
	return (0);
}
