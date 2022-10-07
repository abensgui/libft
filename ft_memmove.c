/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:51:15 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/11 17:52:33 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (d > s)
	{
		while (len--)
		{
			*(d + len) = *(s + len);
		}
	}
	else
		return (ft_memcpy(dst, src, len));
	return (d);
}
/*int main () {
 
   char d[10] = "abcde";
   char s[10] = "ccccccc";
   ft_memmove(d, s, 20);

   printf("%s", d);
   return 0;
}*/
