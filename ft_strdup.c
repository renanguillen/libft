/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:21:34 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/05/03 15:29:14 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*clone;
	size_t	len;

	len = ft_strlen(s) + 1;
	clone = ft_calloc(len, sizeof(char));
	ft_memcpy(clone, s, len);
	return (clone);
}
