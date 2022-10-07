/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:59:59 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/11 18:00:47 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] || (unsigned char)s[i] == (unsigned char)c)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}

/*int main () {
	const char str[] = "http://www.tutorialspoint.com";
   	char ch = '.';
   	char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
