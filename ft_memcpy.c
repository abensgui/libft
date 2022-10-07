/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:47:10 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/11 17:50:04 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == dst)
		return (dst);
	while (i < n)
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dst);
}
/*int main () {
   const char s[50] = "http://www.tutorialspoint.com";
   char d[50] = "Heloooo!!";
   printf("Before memcpy dest = %s\n", d);
   memcpy(d, s, 0);
   printf("After memcpy dest = %s\n", d);
   return(0);
}*/
