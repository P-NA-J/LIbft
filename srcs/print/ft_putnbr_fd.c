/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:33:05 by pauljull          #+#    #+#             */
/*   Updated: 2020/07/03 14:31:37 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0 && n < 10)
		ft_putchar_fd(n + '0', fd);
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n > -10)
			ft_putchar_fd(-n + '0', fd);
		else
		{
			ft_putnbr_fd(-(n / 10), fd);
			ft_putchar_fd(-(n % 10) + '0', fd);
		}
	}
}
