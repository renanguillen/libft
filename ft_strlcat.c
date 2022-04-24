/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:00:31 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/04/07 16:34:53 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*aux;
	size_t	i;
	size_t	len_total;
	size_t	len_dst;
	size_t	len_src;

	aux = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (size > len_dst)
		len_total = len_src + len_dst;
	else
		len_total = len_src + size;
	while (aux[i] && (len_dst + 1) < size)
	{
		dst[len_dst] = aux[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (len_total);
}
