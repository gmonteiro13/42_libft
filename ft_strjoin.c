/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel-scm <gabriel-scm@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 14:20:57 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/16 12:45:15 by gabriel-scm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char				*new_str;
	unsigned int		i;
	
	i = 0;
	new_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new_str == NULL || s1 == NULL || s2 == NULL)
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
