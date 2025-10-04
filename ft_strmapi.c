/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flvejux <flvejux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:01:27 by flvejux           #+#    #+#             */
/*   Updated: 2025/10/04 11:59:31 by flvejux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*modstr;
	size_t	i;

	modstr = malloc(sizeof(char) * ft_strlen(s) +1);
	if (!modstr)
		return (0);
	while (s[i])
	{
		modstr[i] = f(i, s[i]);
		i++;
	}
	modstr = '\0';
	return (modstr);
}
