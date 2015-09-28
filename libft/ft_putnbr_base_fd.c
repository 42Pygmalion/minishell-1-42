/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/21 07:23:06 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/27 21:16:11 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_fd(int nb, int fd, char *base)
{
	int		len;

	len = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= len)
	{
		ft_putnbr_base_fd(nb / len, fd, base);
		ft_putnbr_base_fd(nb % len, fd, base);
	}
	else
	{
		ft_putchar_fd(base[nb], fd);
	}
}
