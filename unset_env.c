/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset_env.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 15:37:23 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/22 15:37:25 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

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

static char		**ft_realloc(char **env, char *arg)
{
	char		**dup;
	int			i;
	int			k;

	i = 0;
	while (env[i])
		i++;
	dup = (char **)malloc(sizeof(char *) * (i + 1));
	i = -1;
	while (env[++i])
		dup[i] = ft_strdup(env[i]);
	dup[i] = NULL;
	i = 0;
	while (env[i])
		free(env[i++]);
	free(env);
	env = (char **)malloc(sizeof(char *) * i);
	i = -1;
	k = 0;
	while (dup[++i])
		if (equal_key(dup[i], arg) == 0)
			env[k++] = ft_strdup(dup[i]);
	env[k] = NULL;
	return (env);
}

t_lazy			*unset_env(t_lazy *shell)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	shell->env = ft_realloc(shell->env, shell->args[1]);
	return (shell);
}
