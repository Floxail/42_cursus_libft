/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:01:40 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/05 12:49:05 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*dst)
		dst++;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			*dst = src[i];
			i++;
			dst++;
		}
	}
	dst[i] = '\0';
	return (ft_strlen(dst)+ ft_strlen(src));
}
