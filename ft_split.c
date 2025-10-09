/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 08:49:17 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/09 10:27:20 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	ft_count_words(const char *str, char c)
{
	int	words;

	words = 0;
	while (*str)
	{
		if (*str != c)
		{
			words++;
			str += ft_word_len(str, c);
		}
		if (*str == c)
			str++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;

	strs = malloc(sizeof(char *) * ft_count_words(s, c));
	if (!strs)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			strs[i] = malloc(ft_word_len(s, c) + 1);
			if (!strs)
				free(strs[i]);
			ft_strlcpy(strs[i], s, ft_word_len(s, c));
			s += ft_word_len(s, c);
			i++;
		}
		while (*s && *s == c)
			s++;
	}
	strs[i] = 0;
	return (strs);
}
