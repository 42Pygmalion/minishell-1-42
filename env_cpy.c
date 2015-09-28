/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_cpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 15:35:15 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/22 15:35:19 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

void env_cpy(const char **environ, t_lazy **shell)
{
	int		i;

	i = 0;
	while (environ[i])
		i++;
	(*shell)->env = (char **)malloc(sizeof(char *) * (i + 1));
	i = 0;
	while (environ[i])
	{
		(*shell)->env[i] = ft_strdup(environ[i]);
		i++;
	}
	(*shell)->env[i] = 0;
}
