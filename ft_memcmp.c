/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel-scm <gabriel-scm@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:57:42 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/17 18:43:44 by gabriel-scm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char *memarea1;
	unsigned const char *memarea2;

	i = 0;
	memarea1 = s1;
	memarea2 = s2;
	while (n > i)
	{
		if (memarea1[i] != memarea2[i])
			return (memarea1[i] - memarea2[i]);
		else
			i++;
	}
	return (0);
}
