/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 08:49:17 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/02 10:05:19 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_len(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

size_t	ft_count_words(char *s, char c)
{
	size_t	word;

	word = 0;
	while (*s)
	{
		if (*str && *str != c)
		{
			word++;
			str += ft_word_len(str, c);
		}
		while (*str && *str == c)
			str++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**words;

	i = 0;
	words = malloc(sizeof(char) * ft_count_words(s, c) + 1);
	if (!words)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			words[i] = ft_strndup(s, ft_word_len(s, c));
			str += ft_word_len(s, c);
			i++;
		}
		while (*s && *s == c)
			s++;
	}
	words[i] = 0;
	return (words);
}
