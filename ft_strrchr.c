/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:27:07 by flvejux           #+#    #+#             */
/*   Updated: 2025/09/30 15:32:54 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (*s)
	{
		len++;
	}
	while (len > 0)
	{
		if (s[len] == c)
			return (*s);
		else
			len--;
	}
	return (0);
}
