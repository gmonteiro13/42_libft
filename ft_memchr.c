/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel-scm <gabriel-scm@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 12:52:39 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/17 18:40:00 by gabriel-scm      ###   ########.fr       */
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
