/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:29:48 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/17 21:33:55 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_alloc(int len, int sa, char const *s)
{
	int	ls;
	int	x;

	ls = ft_strlen(s);
	if (len > ls)
		x = ls - sa;
	else
		x = len;
	if (x < 0)
		return (0);
	return (x);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	i;
	size_t	ls;

	if (s)
	{
		ls = ft_strlen(s);
		ss = malloc((ft_alloc(len, start, s) + 1) * sizeof(char));
		if (!ss)
			return (NULL);
		i = 0;
		while (s[i] && i < len && start < ls && i < ls - start)
		{
			ss[i] = s[i + start];
			i++;
		}
		ss[i] = '\0';
		return (ss);
	}
	return (0);
}
/*int main()
{
    char *str = "h";
	char *ret  = ft_substr(str, 42, 42000000);

    printf("%s",ret);
}*/
