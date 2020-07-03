/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:19:01 by pauljull          #+#    #+#             */
/*   Updated: 2020/07/03 14:25:47 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*s_buff;

	s_buff = (unsigned char*)s;
	index = 0;
	while (index < n)
	{
		if (s_buff[index] == (unsigned char)c)
			return (&((void*)s)[index]);
		index += 1;
	}
	return (NULL);
}
