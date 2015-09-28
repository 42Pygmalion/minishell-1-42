/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 15:37:04 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/22 15:37:06 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

t_lazy	*parse_line(t_lazy *shell, int i)
{
	int		j;

	j = 0;
	shell->args = ft_strsplit(shell->cmd[i], ' ');
	while (!ft_isspace(shell->cmd[i][j]) && shell->cmd[i][j])
		j++;
	shell->cmd[i][j] = '\0';
	return (shell);
}
