/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 07:36:48 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/04 11:34:53 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;	
	size_t	start;
	size_t	end;

	if (s1 && set)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end -1]) && end > start)
			end--;
		str = malloc(sizeof(char) * ((end - start) + 1));
		if (!str)
			return (0);
		ft_strlcpy(str, s1 + start, (end - start + 1));
	}
	return (str);
}
