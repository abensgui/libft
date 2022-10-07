/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:09:39 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/13 10:59:27 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (ft_strlen(to_find) == 0)
	{
		return ((char *)str);
	}
	while (str[i] && i < len)
	{
		j = 0;
		k = i;
		while (str[k] == to_find[j] && to_find[j] != '\0')
		{
			if (to_find[j + 1] == '\0' && (i + j) < len)
			{
				return ((char *)str + i);
			}
			k++;
			j++;
		}
		i++;
	}
	return (0);
}
/*int main()
{

	 printf("%s \n",ft_strnstr("aaabcabcd","cd",8));
}*/
