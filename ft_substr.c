/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floxail <floxail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:34:36 by floxail           #+#    #+#             */
/*   Updated: 2025/10/13 09:39:09 by floxail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		substr = malloc(sizeof(char));
		substr[0] = '\0';
		return (substr);
	}
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	if (start < len)
		i = ft_strlen(s) - start;
	if (i > len)
		i = len;
	ft_strlcpy(substr, s + start, i + 1);
	return (substr);
}
