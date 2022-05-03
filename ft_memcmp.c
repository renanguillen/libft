/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillen <guillen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:26:12 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/05/03 15:06:43 by guillen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1aux;
	unsigned char	*s2aux;
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	s1aux = (unsigned char *)s1;
	s2aux = (unsigned char *)s2;
	while (n > i)
	{
		if (s1aux[i] != s2aux[i])
			return (s1aux[i] - s2aux[i]);
		i++;
	}
	return (0);
}
