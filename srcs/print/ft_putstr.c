/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:33:16 by pauljull          #+#    #+#             */
/*   Updated: 2020/07/03 14:31:41 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

void	ft_putstr(char const *s)
{
	if (!s)
		return ;
	while (*s != 0)
		ft_putchar(*(s++));
}
