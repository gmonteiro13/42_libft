/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel-scm <gabriel-scm@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:35:31 by gsoares-          #+#    #+#             */
/*   Updated: 2021/02/11 19:11:29 by gabriel-scm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long int i;
	long int sign;
	long int result;

	sign = 1;
	result = 0;
	i = 0;
    while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\v' || nptr[i] == '\f'
    || nptr[i] == '\r' || nptr[i] == '\n')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while ((nptr[i] >= '0' && nptr[i] <= '9'))
	{
        result *= 10;
		result += nptr[i] - '0';
        if (result > 2147483647 && sign == 1)
            return (-1);
        if (result > 2147483648 && sign == -1)
            return (0);
        i++;
	}
	return (result * sign);
}
