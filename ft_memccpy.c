/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel-scm <gabriel-scm@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:22:57 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/11 12:41:01 by gabriel-scm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char   *d;
    unsigned const char *s;
    size_t  i;

    d = dest;
    s = src;
    i = 0;
    while (n > i)
    {
        ((unsigned char *)d)[i] = ((unsigned char *)s)[i];
        if (d[i] == (unsigned char)c)
        {
            return (d + i + 1);
        }
        i++;
    }
    return (NULL);
}
