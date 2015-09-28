/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pwd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 15:36:33 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/22 15:36:35 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh1.h"

char	*get_pwd(void)
{
	char	*pwd;

	pwd = NULL;
	pwd = (char *)malloc((MAXPATHLEN + 1) * sizeof(char));
	if (pwd != NULL)
	{
		ft_bzero(pwd, 0);
		pwd = getcwd(pwd, MAXPATHLEN);
	}
	return (pwd);
}
