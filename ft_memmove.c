/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel-scm <gabriel-scm@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:19:43 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/17 18:26:02 by gabriel-scm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char *s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if ((dest == NULL && src == NULL))
		return (NULL);
	if (src > dest)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d = d + n;
		s = s + n;
		while (n--)
		{
			*--d = *--s;
		}
	}
	return (dest);
}
