/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel-scm <gabriel-scm@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:52:56 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/17 18:54:08 by gabriel-scm      ###   ########.fr       */
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
