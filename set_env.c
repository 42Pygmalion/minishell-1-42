/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 15:37:17 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/22 15:37:18 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

static char		**ft_realloc(char **env)
{
	char		**dup;
	int			i;

	i = 0;
	while (env[i])
		i++;
	dup = (char **)malloc(sizeof(char *) * (i + 1));
	i = 0;
	while (env[i])
	{
		dup[i] = ft_strdup(env[i]);
		i++;
	}
	dup[i] = NULL;
	i = 0;
	while (env[i])
		free(env[i++]);
	env = (char **)malloc(sizeof(char *) * (i + 2));
	i = -1;
	while (dup[++i])
		env[i] = ft_strdup(dup[i]);
	env[i++] = NULL;
	env[i] = NULL;
	return (env);
}

static char		*unique_argument(char *s1)
{
	if (ft_strchr(s1, '=') == 0)
		return (ft_strjoin(s1, "="));
	return (ft_strdup(s1));
}

static char		*multiple_arguments(char *s1, char *s2)
{
	return (ft_strjoin(ft_strjoin(s1, "="), s2));
}

static int		equal_key(char *s, char *new)
{
	int		i;
	char	*cpy;
	char	*cpyarg;

	i = 0;
	if (s)
		cpy = ft_strdup(s);
	if (new)
		cpyarg = ft_strdup(new);
	if (!new || !s)
		return (0);
	while (cpyarg[i] != '=' && cpyarg[i])
		i++;
	cpyarg[i] = '\0';
	i = 0;
	while (cpy[i] != '=')
		i++;
	cpy[i] = '\0';
	i = 0;
	while (cpy[i] == cpyarg[i] && cpy[i] && cpyarg[i])
		i++;
	if (!cpy[i] && !cpyarg[i])
		return (1);
	return (0);
}

t_lazy			*set_env(t_lazy *shell)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (shell->args[0])
		while (shell->args[i])
			i++;
	while (shell->env[k] && equal_key(shell->env[k], shell->args[1]) == 0)
		k++;
	if ((i - 1 == 3 && ft_strcmp(shell->args[2], "=") == 0) || i - 1 == 2)
	{
		shell->env = ft_realloc(shell->env);
		shell->env[k] = multiple_arguments(shell->args[1], shell->args[i - 1]);
	}
	else if (i - 1 == 1)
	{
		shell->env = ft_realloc(shell->env);
		shell->env[k] = unique_argument(shell->args[1]);
	}
	else if (i - 1 == 0)
		print_env(shell);
	else
		ft_putendl_fd("Format: 1=2 || 1 = 2 || 1 2 || 1", 2);
	return (shell);
}
