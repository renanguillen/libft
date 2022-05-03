/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillen <guillen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:19:10 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/05/03 15:09:34 by guillen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;
	int		len;
	int		i;

	if (c > 255)
		return ((void *)s);
	i = 0;
	aux = (char *)s;
	len = ft_strlen(aux);
	while (i != len)
	{
		aux++;
		i++;
	}
	while (i >= 0)
	{
		if (*aux == c)
			return (aux);
		i--;
		aux--;
	}
	aux = NULL;
	return (aux);
}
