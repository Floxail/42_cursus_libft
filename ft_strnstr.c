/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:49:19 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/04 10:56:35 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[j])
		return (0);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && len == 0)
		{
			j++;
			len--;
		}
		if (!little[i + j])
			return (big + i);
		i++;
	}
	return (0);
}
