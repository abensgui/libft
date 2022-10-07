/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:39:02 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/15 11:53:36 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst)
	{
		new->next = (*alst);
		*alst = new;
	}
	else
	{
		*alst = new;
	}
}
// int main()
// {
// 	t_list *t1;
// 	t_list *t2;
// 	t_list *t3;
// 	t1 = malloc(sizeof(t_list));
// 	t2 = malloc(sizeof(t_list));
//     t3 = malloc(sizeof(t_list));
//     t3->content = "cc";
// 	t3->next = NULL;	
// 	t1->content = "aa";
// 	t1->next = t2;
// 	t2->content = "bb";
// 	t2->next = NULL;   
// 	ft_lstadd_front(&t1, t3);
// 	t_list *t =ft_lstlast(t3);
// 	printf("%s",t->content);
// }
