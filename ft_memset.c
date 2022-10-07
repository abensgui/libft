/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:59:28 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/11 17:45:14 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
/*int main()
{
    int  str[] = {1,2,3,4,5,6,7,8,9};

    //char *st = ft_memset(str, '1', 2);

	//puts(st);

	puts(memset(str,1,2*4));
		
    return 0;
}*/
