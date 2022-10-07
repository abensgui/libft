/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:29:50 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/17 21:28:27 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static int	ft_isspace(char const *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				s;
	unsigned long	nb;

	i = 0;
	s = 1;
	nb = 0;
	i = ft_isspace(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		if (nb > 9223372036854775807 && s == 1)
			return (-1);
		else if (nb > 9223372036854775807 && s == -1)
			return (0);
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return ((int )(nb * s));
}

/*int main()
{
	printf("%d\n",ft_atoi("214748364721474836474444"));
	printf("%d\n",atoi("214748364721474836474444"));

}*/