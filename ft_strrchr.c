/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floxail <floxail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:27:07 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/08 08:06:23 by floxail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			str = ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		str = ((char *)&s[i]);
	return (str);
}
