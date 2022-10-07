/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:59:22 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/15 16:02:38 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node_element;
	t_list	*link_list;

	link_list = NULL;
	while (lst)
	{
		node_element = ft_lstnew(f(lst->content));
		if (node_element == NULL)
		{
			ft_lstclear(&link_list, del);
			return (0);
		}
		ft_lstadd_back(&link_list, node_element);
		lst = lst->next;
	}
	return (link_list);
}
//  int main()
//  {
// 	t_list *t1;
//  	t_list *t2;
//  	t_list *t3;
//  	t1 = malloc(sizeof(t_list));
// 	  	t2 = malloc(sizeof(t_list));
// 	      t3 = malloc(sizeof(t_list));
// 	      t3->content = "cc";
// 	  	t3->next = NULL;
// 	 	t1->content = "aa";
// 		  	t1->next = t2;
// 		  	t2->content = "bb";
// 		  	t2->next = NULL;    
// 	  	ft_lstadd_back(&t1, t3);
// 		   	t_list *t =ft_lstlast(t1);
//  	printf("%s",t->content);
//  }
