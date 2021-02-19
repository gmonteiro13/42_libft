/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 14:20:57 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/19 15:24:10 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char				*new_str;
	unsigned int		i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new_str == NULL)
		return (NULL);
	while (*s1)
	{
		new_str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		new_str[i] = *s2;
		i++;
		s2++;
	}
	new_str[i] = '\0';
	return (new_str);
}
