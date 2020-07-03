/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:32:56 by pauljull          #+#    #+#             */
/*   Updated: 2020/07/03 14:31:24 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (!s)
		return ;
	while (*s != 0)
		ft_putchar_fd(*(s++), fd);
	ft_putchar_fd('\n', fd);
}
