/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:37:56 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/19 10:54:58 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static	int	ft_lin(const char *s, char c)
{
	int	i;
	int	spl;

	i = 0;
	spl = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			spl++;
			while (s[i] != c && s[i])
				i++;
			i--;
		}
		i++;
	}
	return (spl);
}

static	int	ft_len(char const *s, int i, char c)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static	char	**ft_prsplit(int k, char **cpy, const char *s, char c)
{
	int	i;
	int	ii;
	int	l;
	int	j;

	i = 0;
	ii = 0;
	while (i < k && s[ii])
	{
		while (s[ii] == c && s[ii])
			ii++;
		l = ft_len(s, ii, c);
		cpy[i] = (char *)malloc(sizeof(char) * (l + 1));
		if (!cpy[i])
			free (cpy);
		j = 0;
		while (s[ii] != c && s[ii])
			cpy[i][j++] = s[ii++];
		cpy[i++][j] = '\0';
	}
	cpy[i] = NULL;
	return (cpy);
}

char	**ft_split(const char *s, char c)
{
	int		k;
	char	**cpy;

	if (s)
	{
		k = ft_lin(s, c);
		cpy = (char **)malloc(sizeof(char *) * (k + 1));
		if (!cpy)
			return (NULL);
		return (ft_prsplit (k, cpy, s, c));
	}
	return (NULL);
}
// int main(void)
// {
//     char **x = ft_split("  aa  bb   cc   dd   ", ' ');
//     int i = 0;int j = 0;
//      while( *x )
//     {
//         printf("%s\n",*x);
//         x++;
//     }
// }
