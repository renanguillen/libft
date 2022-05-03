/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillen <guillen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:01:08 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/05/03 15:07:05 by guillen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*aux_dst;
	char	*aux_src;

	aux_dst = (char *)dst;
	aux_src = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (n--)
			aux_dst[n] = aux_src[n];
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
