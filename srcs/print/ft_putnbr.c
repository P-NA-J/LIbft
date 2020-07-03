/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:33:08 by pauljull          #+#    #+#             */
/*   Updated: 2020/07/03 14:31:28 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

void	ft_putnbr(int n)
{
	if (n >= 0 && n < 10)
		ft_putchar(n + '0');
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	if (n < 0)
	{
		ft_putchar('-');
		if (n > -10)
			ft_putnbr(-n);
		else
		{
			ft_putnbr(-(n / 10));
			ft_putchar(-(n % 10) + '0');
		}
	}
}
