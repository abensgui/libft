/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:32:50 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/11 18:40:17 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (!s1)
		return (NULL);
	s = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[k])
	{
		s[i] = s2[k];
		k++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
/*int main()
{
	printf("%s",ft_strjoin("ayoub","ben"));

}*/
