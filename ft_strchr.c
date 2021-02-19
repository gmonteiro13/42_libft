/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:52:56 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/19 15:20:24 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char *p;

	p = s;
	while (*p + 1)
	{
		if (*p == c)
		{
			return (char *)p;
		}
		if (*p == '\0')
		{
			return (NULL);
		}
		p++;
	}
	return (NULL);
}
