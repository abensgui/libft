/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:26:54 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/11 19:34:08 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	int	ft_len(int a)
{
	int	i;

	i = 0;
	if (a < 0)
		i++;
	if (a == 0)
		i++;
	while (a != 0)
	{
		a /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*p;
	int				i;
	unsigned int	j;

	i = ft_len(n);
	p = malloc((i + 1) * sizeof(char));
	if (!p)
		return (0);
	if (n == 0)
		p[0] = '0';
	p[i--] = '\0';
	if (0 > n)
	{
		p[0] = '-';
		j = n * (-1);
	}
	else
		j = n;
	while (j > 0)
	{
		p[i--] = (j % 10) + '0';
		j = j / 10;
	}
	return (p);
}
