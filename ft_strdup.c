/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 22:21:47 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/19 15:20:31 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*dup;

	s_len = ft_strlen(s);
	dup = (char *)malloc(s_len + 1);
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, s, s_len + 1);
	return (dup);
}
