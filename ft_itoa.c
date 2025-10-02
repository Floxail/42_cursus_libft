/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:09:20 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/02 10:55:23 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	nb_size(long n)
{
	size_t	size;

	size = 2;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n / 10 != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	nbr;
	size_t	sign;
	char	*nb;

	nbr = n;
	sign = 1;
	nb = malloc(sizeof(char) * (nb_size(nbr)));
	if (!nb)
		return (0);
	if (nbr < 0)
	{
		sign *= -1;
		*nb = '-';
		nb++;
	}
	if (nbr >= 10)
	{
		ft_itoa(nbr / 10);
		*nb = (nb % 10 + '0');
		nb++;
	}
	return (nb);
}
