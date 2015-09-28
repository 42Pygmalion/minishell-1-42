/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/16 21:02:04 by lboudaa           #+#    #+#             */
/*   Updated: 2014/04/27 17:28:48 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c)
{
	int		i;
	int		word;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (word);
}

static char		*add_word(char const *s, int *i, char c)
{
	int		size;
	char	*word;
	int		j;

	size = *i;
	j = 0;
	while (s[size] && s[size] != c)
		size++;
	size = size - *i;
	word = (char *)malloc(sizeof(char) * size + 1);
	while (s[*i] != c && s[*i])
		word[j++] = s[(*i)++];
	word[j] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		words;

	i = 0;
	j = 0;
	words = count_words(s, c);
	str = (char **)malloc(sizeof(char *) * words + 1);
	while (j < words)
	{
		while (s[i] == c)
			i++;
		str[j++] = add_word(s, &i, c);
	}
	str[j] = NULL;
	return (str);
}
