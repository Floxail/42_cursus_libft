/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:09:20 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/09 11:32:23 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	nb_size(long n)
{
	size_t	size;

	size = 0;
	if (n < 0)
	{
		n = -n;
	}
	while (n > 0)
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
	int		i;

	i = 0;
	nbr = n;
	len = nb_size(n);
	nb = malloc(sizeof(char) * (len + 1));
	if (!nb)
		return (0);
	nb[len] = '\0';
	if (nbr < 0)
	{
		nb[0] = '-';
		nbr -= -nbr;
	}
	while (nbr / 10 != 0)
	{
		nb[i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	return (nb);
}
