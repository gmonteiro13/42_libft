/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:49:35 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/19 15:25:19 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	size_t	i;
	char	*result;

	if (s == NULL || f == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (s_len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		result[i] = (*f)((unsigned int)i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
