/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:09:06 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/04 09:33:52 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*nb;

	if (!size)
		return (0);
	nb = malloc(sizeof(nmemb) * size);
	if (!nmemb)
		return (0);
	return (nb);
}
