/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 18:34:08 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/19 15:20:50 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = 0;
	j = dest_len;
	if (size <= dest_len)
		return (src_len + size);
	while (*(src + i) != '\0' && (j < size - 1))
	{
		*(dest + j) = *(src + i);
		i++;
		j++;
	}
	*(dest + j) = '\0';
	return (dest_len + src_len);
}
