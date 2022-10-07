/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:04:03 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/15 16:30:47 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
// int main()
// {
//     t_list *l1 = malloc(sizeof(t_list));
//     t_list *l2 = malloc(sizeof(t_list));
//     t_list *l3 = malloc(sizeof(t_list));
//     t_list *l4 = malloc(sizeof(t_list));
//     l1->next = l2;
//     l2->next = l3;
//     l3->next = l4;
//     l4->next = NULL;
//     printf("%d",ft_lstsize(l1));
// }
