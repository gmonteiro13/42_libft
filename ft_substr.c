/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:57:31 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/19 15:21:25 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	i = 0;
	substr = malloc(len + 1);
	if (substr == NULL || s == NULL)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (i < len && s[start + i] != '\0')
		{
			substr[i] = s[start + i];
			i++;
		}
	}
	substr[i] = '\0';
	return (substr);
}
