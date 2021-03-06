/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 15:35:31 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/22 15:35:36 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

static t_lazy	*set_command(t_lazy *shell)
{
	int		i;

	i = 0;
	if (shell->path != NULL)
	{
		shell->absolute = ft_strdup(shell->line);
		if (access(shell->line, F_OK) == 0)
			return (shell);
		while (shell->path[i])
		{
			shell->absolute = ft_strjoin(shell->path[i], "/");
			shell->absolute = ft_strjoin(shell->absolute,
											shell->line);
			if (access(shell->absolute, F_OK) == 0)
				return (shell);
			i++;
		}
		if (shell->absolute)
			free(shell->absolute);
		shell->absolute = NULL;
		ft_putendl(ft_strjoin(shell->line, ": command not found"));
	}
	else
		ft_putendl("Path inexistant. Utilisateur con.");
	return (shell);
}

static t_lazy	*exec_path(t_lazy *shell)
{
	shell->pid = fork();
	if (shell->pid == -1)
		return (shell);
	if (shell->pid == 0)
	{
		shell = set_command(shell);
		execve(shell->absolute, shell->args, shell->env);
	}
	else
		waitpid(shell->pid, 0, 0);
	return (shell);
}

t_lazy			*exec_command(t_lazy *shell, int i)
{
	shell->line = ft_strdup(shell->cmd[i]);
	if (ft_strcmp(ft_strlower(shell->line), "exit") == 0)
		free_exit(&shell);
	else if (ft_strcmp(ft_strlower(shell->line), "env") == 0)
		print_env(shell);
	else if (ft_strcmp(ft_strlower(shell->line), "setenv") == 0)
		shell = set_env(shell);
	else if (ft_strcmp(ft_strlower(shell->line), "unsetenv") == 0)
		shell = unset_env(shell);
	else if (ft_strcmp(ft_strlower(shell->line), "cd") == 0)
		shell = cd(shell);
	else
		shell = exec_path(shell);
	return (shell);
}
