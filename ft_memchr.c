/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:10:43 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/12 14:14:07 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
		{
			return ((unsigned char *)(s + i));
		}
		i++;
	}
	return (0);
}
/*int main () {
   const char str[] = "hamza";
   const char ch = 'z';
   char *ret;

   ret = ft_memchr(str, ch, 3);

   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("\n %s",memchr("hamza",'z',3));

   return(0);
}*/
