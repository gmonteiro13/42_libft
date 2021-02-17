/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel-scm <gabriel-scm@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 21:39:47 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/16 21:59:02 by gabriel-scm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t count_segment(char const *s, char c)
{
	size_t counter;
	int i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue;
		}
		counter++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (counter);
}

static char *ft_strndup(const char *s1, size_t n)
{
	char *clone;
	size_t i;

	if ((clone = (char *)malloc(sizeof(char) * (n + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		clone[i] = s1[i];
		i++;
	}
	clone[i] = '\0';
	return (clone);
}

static void *destroy_strs(char **strs)
{
	int i;

	i = 0;
	while (strs[i] != NULL)
		free(strs[i++]);
	free(strs);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
	char **strs;
	size_t tab_counter;
	size_t i;
	size_t j;

	if (s == NULL)
		return (NULL);
	tab_counter = count_segment(s, c);
	if ((strs = (char **)malloc(sizeof(char *) * (tab_counter + 1))) == NULL)
		return (NULL);
	tab_counter = 0;
	j = -1;
	while (s[++j])
	{
		if (s[j] == c)
			continue;
		i = 0;
		while (s[j + i] && s[j + i] != c)
			i++;
		if ((strs[tab_counter++] = ft_strndup(&s[j], i)) == NULL)
			return (destroy_strs(strs));
		j += i - 1;
	}
	strs[tab_counter] = NULL;
	return (strs);
}
// void ft_print_result(char const *s)
// {
// 	int len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// int main()
// {
// 	char **tabstr;
// 	int i;

// 	i = 0;
	
// 	if (!(tabstr = ft_split("       lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse",' ')))
// 		ft_print_result("NULL");
// 	else
// 	{
// 		while (tabstr[i] != NULL)
// 		{
// 			ft_print_result(tabstr[i]);
// 			write(1, "\n", 1);
// 			i++;
// 		}
// 	}
// }