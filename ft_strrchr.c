/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel-scm <gabriel-scm@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:18:31 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/17 19:06:03 by gabriel-scm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;
	size_t		s_len;

	s_len = ft_strlen(s);
	p = (const char *)s;
	while (s_len + 1)
	{
		if (*(p + s_len) == c)
		{
			return (char *)(p + s_len);
		}
		s_len--;
	}
	return (NULL);
}
