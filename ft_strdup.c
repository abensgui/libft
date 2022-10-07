/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:25:23 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/11 18:28:28 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *sr)
{
	char	*p;
	int		i;
	char	*src;

	i = 0;
	src = (char *) sr;
	p = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!p)
		return (0);
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*int main() {
   char *str = "Helloworld";
   char *result;
   result = strndup(str, 3);
   printf("The string : %s", result);
   return 0;
}*/
