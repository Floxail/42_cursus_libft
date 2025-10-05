/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:09:06 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/05 12:36:54 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*nb;
	size_t			i;

	i = 0;
	if (!size)
		return (0);
	nb = malloc(nmemb * size);
	if (!nmemb)
		return (0);
	while (i < nmemb * size)
	{
		nb[i] = 0;
		i++;
	}
	return (nb);
}
