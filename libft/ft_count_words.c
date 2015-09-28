/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/16 21:22:40 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/16 21:29:25 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s)
{
	int		i;
	int		word;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (ft_isspace(s[i]))
			i++;
		if ((!ft_isspace(s[i])) && s[i])
		{
			word++;
			while ((!ft_isspace(s[i])) && s[i])
				i++;
		}
	}
	return (word);
}
