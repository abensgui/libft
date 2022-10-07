/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensgui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:53:01 by abensgui          #+#    #+#             */
/*   Updated: 2021/11/11 17:54:37 by abensgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	l;
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while ((i + 1) < size && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	l = ft_strlen(src);
	return (l);
}
