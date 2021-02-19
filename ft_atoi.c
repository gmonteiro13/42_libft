/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoares- <gsoares-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 15:17:53 by gsoares-          #+#    #+#             */
/*   Updated: 2021/02/19 15:17:58 by gsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_checkspaces(const char *nptr)
{
	long int	i;

	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\v'
	|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == '\n')
		i++;
	return (i);
}

int				ft_atoi(const char *nptr)
{
	long int	i;
	long int	sign;
	long int	result;

	sign = 1;
	result = 0;
	i = ft_checkspaces(nptr);
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
