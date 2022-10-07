/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:53:18 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/15 15:54:35 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		(*del)(lst->content);
		free (lst);
	}
}
// int main()
// {
//     t_list *t = malloc(sizeof(t_list));
//     t->content = ft_strdup("ayoub");
//     ft_lstdelone(t,ft_del);
//     printf("%s",t->content);
// }
