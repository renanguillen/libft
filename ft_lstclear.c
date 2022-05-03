/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillen <guillen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:06:45 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/05/03 15:03:06 by guillen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ret;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		ret = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ret;
	}
	*lst = NULL;
}
