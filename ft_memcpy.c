/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flox <flox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:51:23 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/06 14:28:07 by flox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	tmp_dst = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if (tmp_dst == 0 && tmp_src == 0)
		return (dest);
	while (n > 0)
	{
		*tmp_dst = *tmp_src;
		tmp_dst++;
		tmp_src++;
		n--;
	}
	return (dest);
}
