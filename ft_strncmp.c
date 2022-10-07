/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:05:42 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/12 14:07:44 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_strncmp(const char *ss1, const char *ss2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *) ss1;
	s2 = (unsigned char *) ss2;
	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
// int main () {
//    char *s1 = "\200";
// 	char *s2 = "\0";

//    printf("%d",ft_strncmp(s1, s2, 1));
//    return(0);
// }
