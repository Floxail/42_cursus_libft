/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:49:19 by flvejux           #+#    #+#             */
/*   Updated: 2025/09/30 15:32:13 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!little[j])
		return (0);
	while (big[i])
	{
		while (Big[i + j] == little[j] && len == 0)
		{
			j++;
			len--;
		}
		if (!little[i + j])
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
