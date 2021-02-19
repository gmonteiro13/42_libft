/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel-scm <gabriel-scm@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 21:39:47 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/19 15:11:41 by gabriel-scm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	int			count;

	count = 0;
	while (*s)
	{
		if (*s != c && *s != 0)
		{
			count++;
			while (*s != c && *s != 0)
				s++;
		}
		else if (*s != 0)
			s++;
	}
	return (count);
}

static char		*ft_free(char **array, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static void		cpy_segment(char *dest, const char *src, int st, int end)
{
	int			i;

	i = 0;
	while (st < end)
	{
		dest[i] = src[st];
		i++;
		st++;
	}
	dest[i] = 0;
}

static void		word_array(char **a, const char *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		st;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		{
			st = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			if ((a[j] = (char *)malloc(sizeof(char) * (i - st + 1))) == 0)
			{
				ft_free(a, j);
				return ;
			}
			cpy_segment(a[j], s, st, i);
			j++;
		}
		else if (s[i] != 0)
			i++;
	}
}

char			**ft_split(const char *s, char c)
{
	size_t		words;
	char		**split;

	if (s == 0)
		return (0);
	words = word_count(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (split == 0)
		return (0);
	split[words] = 0;
	if (words == 0)
		return (split);
	word_array(split, s, c);
	return (split);
}
