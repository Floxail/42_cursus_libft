/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:01:40 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/04 11:30:12 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
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
	*dst = '\0';
	while (dst[len])
		len++;
	return (len);
}
