/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:50:43 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/15 15:52:36 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node ;

	while ((*lst) != NULL)
	{
		node = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = node;
	}
}
