/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel-scm <gabriel-scm@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:54:05 by gabriel-scm       #+#    #+#             */
/*   Updated: 2021/02/17 15:13:09 by gabriel-scm      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int abs_number;

	if (fd < 0 || fd > 2)
		return;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		abs_number = (unsigned int)(-n);
	}
	else
		abs_number = (unsigned int)n;
	if (abs_number > 9)
	{
		ft_putnbr_fd(abs_number / 10, fd);
		ft_putchar_fd(48 + abs_number % 10, fd);
	}
	else
		ft_putchar_fd(abs_number + 48, fd);
}
