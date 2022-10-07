/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:34:42 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/15 15:34:27 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		j;
	int		i;
	char	*p;

	if (!s)
		return (0);
	j = 0;
	i = ft_strlen(s);
	p = malloc((i + 1) * sizeof(char));
	if (!p)
		return (0);
	while (s[j])
	{
		p[j] = (*f)(j, s[j]);
		j++;
	}
	p[j] = '\0';
	return (p);
}
/*int main()
{
    printf("%s",ft_strmapi("ayoub",ft_nexal));
}*/
