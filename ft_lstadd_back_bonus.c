/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:38:46 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/17 22:02:04 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;

	temp = *alst;
	if (*alst == NULL)
	{
		(*alst) = new;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
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
// 	ft_lstadd_back(&t1, t3);
// 	t_list *t =ft_lstlast(t1);
// 	printf("%s",t->content);
// }
