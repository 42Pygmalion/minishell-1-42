/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sh1.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 15:36:08 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/22 15:36:12 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SH1_H
# define FT_SH1_H

# include <unistd.h>
# include <dirent.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/wait.h>
# include <signal.h>
# include <sys/types.h>
# include <sys/param.h>
# include "./libft/libft.h"

typedef struct		s_lazy
{
	char			**path;
	pid_t			pid;
	char			*pwd;
	char			*expwd;
	char			**env;
	char			*line;
	char			**args;
	int				flag;
	char			*absolute;
	char			**cmd;
}					t_lazy;

void				env_cpy(const char **environ, t_lazy **shell);
char				**get_path(t_lazy *shell);
t_lazy				*ft_sh1(t_lazy *shell);
void				free_exit(t_lazy **shell);
t_lazy				*parse_line(t_lazy *shell, int i);
t_lazy				*exec_command(t_lazy *shell, int i);
void				print_env(t_lazy *shell);
t_lazy				*set_env(t_lazy *shell);
t_lazy				*unset_env(t_lazy *shell);
char				*get_pwd(void);
t_lazy				*cd(t_lazy *shell);

#endif
