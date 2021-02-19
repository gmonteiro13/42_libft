/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:22:57 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/19 15:19:17 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *des, const void *sc, int c, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	d = des;
	s = sc;
	i = 0;
	while (n > i)
	{
		((unsigned char *)d)[i] = ((unsigned char *)s)[i];
		if (d[i] == (unsigned char)c)
		{
			return (d + i + 1);
		}
		i++;
	}
	return (NULL);
}
