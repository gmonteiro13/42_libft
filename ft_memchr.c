/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 12:52:39 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/19 15:19:21 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char *p;

	p = s;
	while (n--)
	{
		if (*p == (unsigned char)c)
		{
			return (unsigned char *)p;
		}
		p++;
	}
	return (NULL);
}
