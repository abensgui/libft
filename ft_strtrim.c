/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:40:49 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/15 17:09:24 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	int	is_in(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static	void	ft_al(char *s, char const *s1, int k, int i)
{
	int	x;

	x = 0;
	while (k < i)
	{
		s[x] = s1[k];
		k++;
		x++;
	}
	s[x] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	if (!s1)
		return (0);
	while (s1[i] != '\0')
		i++;
	while (is_in (set, s1[k]))
		k++;
	while (i > 0 && is_in (set, s1[i - 1]))
		i--;
	if (i < k)
		i = k;
	str = malloc(sizeof(char) * (i - k + 1));
	if (!str)
		return (0);
	ft_al(str, (char *)s1, k, i);
	return (str);
}

// int main()
// {
//     char *s1 = "ab hello bc";
//     char *set = "abc";
//   char *dest1 = ft_strtrim("   xxx   xxx", " x");
//     printf("%s\n", dest1);
// }
