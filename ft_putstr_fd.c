/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:44:32 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/15 16:32:56 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i])
		{
			write(fd, (str + i), 1);
			i++;
		}
	}
}
/*int main()
{
	int fd;
	FILE *f = fopen("test.txt", "w");
	fd = fileno(f);

	ft_putstr_fd("hello world!@!!!!", fd);
	fclose(f);
	return (0);
}*/
