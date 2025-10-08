/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floxail <floxail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:09:06 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/08 09:17:36 by floxail          ###   ########.fr       */
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
	if (!nb)
		return (0);
	while (i < nmemb * size)
	{
		nb[i] = 0;
		i++;
	}
	return (nb);
}
