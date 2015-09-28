/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <lboudaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 22:44:04 by lboudaa           #+#    #+#             */
/*   Updated: 2015/01/23 18:45:35 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_reboot(size_t newvaluei, size_t newvaluej, size_t *i, size_t *j)
{
	*i = newvaluei;
	*j = newvaluej;
}

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;
	char		*dst;

	i = -1;
	j = 0;
	dst = NULL;
	if (!*s2)
		return ((char *)s1);
	while (s1[++i] && s2[j] && i < n)
	{
		if (s1[i] == s2[j] && j == 0)
			dst = (char *)&s1[i];
		if (s1[i] == s2[j])
			j++;
		else if (j)
			ft_reboot(i - j, 0, &i, &j);
	}
	if (s2[j] == '\0')
		return (dst);
	return (NULL);
}
