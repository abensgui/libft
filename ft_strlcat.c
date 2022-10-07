/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:55:12 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/17 21:25:14 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ld;
	size_t	ls;
	size_t	i;

	ls = ft_strlen((char *)src);
	ld = ft_strlen(dest);
	i = 0;
	if (size == 0 || !dest || !src)
	{
		return (ls);
	}
	if (size >= ld)
	{
		while (src[i] && (ld + i) < (size - 1))
		{
			dest[ld + i] = src[i];
			i++;
		}
		dest[ld + i] = '\0';
		return (ld + ls);
	}
	return (size + ls);
}
/*int main()
{
	char dest[] = "hello";
	char src[] = "world";
	int x = ft_strlcat(dest,src,3);
	printf("%d\n%s\n%s\n",x,dest,src);

}*/
