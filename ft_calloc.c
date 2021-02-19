/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 22:02:52 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/19 15:18:29 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	if ((memory = malloc(nmemb * size)) == NULL)
		return (NULL);
	ft_bzero(memory, nmemb * size);
	return (memory);
}
