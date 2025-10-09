/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floxail <floxail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:09:20 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/08 10:36:41 by floxail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	nb_size(long n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
	{
		size++;
	}
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		len;
	char	*nb;

	nbr = n;
	len = nb_size(n);
	nb = malloc(sizeof(char) * (len + 1));
	if (!nb)
		return (0);
	nb[len] = '\0';
	if (nbr < 0)
	{
		nb[0] = '-';
	}
	while (len-- > (nbr < 0))
	{
		nb[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (nb);
}
