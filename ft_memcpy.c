/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillen <guillen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:49:50 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/05/03 15:06:52 by guillen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*aux_dst;
	char	*aux_src;

	i = 0;
	if (!dst && !src)
		return (NULL);
	aux_dst = (char *)dst;
	aux_src = (char *)src;
	while (i < n)
	{
		aux_dst[i] = aux_src[i];
		i++;
	}
	return (dst);
}
