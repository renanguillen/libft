/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillen <guillen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:08:05 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/05/03 15:08:21 by guillen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*aux;

	if (c > 255)
		return ((void *)s);
	aux = (char *)s;
	while (*aux)
	{
		if (*aux == c)
			return (aux);
		aux++;
	}
	if (*aux == c)
		return (aux);
	return (NULL);
}
