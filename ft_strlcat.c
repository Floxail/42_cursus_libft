/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:01:40 by flvejux           #+#    #+#             */
/*   Updated: 2025/09/30 15:33:23 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (*dest)
		dest++;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			*dest = src[i];
			i++;
			dest++;
		}
	}
	*dest = '\0';
	while (dest[len])
		len++;
	return (len);
}
