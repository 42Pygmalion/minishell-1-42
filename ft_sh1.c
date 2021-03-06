/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 15:35:58 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/22 15:36:02 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

static void ignore_signal(int num)
{
	(void)num;
}

t_lazy		*ft_sh1(t_lazy *shell)
{
	int		i;

	i = 0;
	signal(SIGINT, ignore_signal);
	ft_putstr("\033[34m");
	ft_putstr(shell->pwd);
	ft_putstr("\033[36m)>\033[0m ");
	shell->path = get_path(shell);
	if (get_next_line(0, &(shell)->line) > 0)
	{
		shell->line = ft_epur_str(shell->line);
		shell->cmd = ft_strsplit(shell->line, ';');
		while (shell->cmd[i])
		{
			shell->cmd[i] = ft_epur_str(shell->cmd[i]);
			shell = parse_line(shell, i);
			shell = exec_command(shell, i);
			i++;
		}
	}
	else
		free_exit(&shell);
	return (shell);
}
