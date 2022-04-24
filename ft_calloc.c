/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:59:14 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/04/21 20:12:16 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ans;

	if (nmemb == __SIZE_MAX__ || size == __SIZE_MAX__)
		return (NULL);
	ans = malloc(nmemb * size);
	if (!ans)
		return (NULL);
	ft_bzero(ans, nmemb * size);
	return (ans);
}
