/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:33:03 by pauljull          #+#    #+#             */
/*   Updated: 2020/07/03 14:40:06 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t			index;
	unsigned char	c_buff;
	char			*s_buff;

	index = ft_strlen(s);
	c_buff = (unsigned char)c;
	s_buff = (char *)s;
	while (index > 0)
	{
		if (s[index] == c_buff)
			return (&s_buff[index]);
		index -= 1;
	}
	if (s[index] == c_buff)
		return (&s_buff[index]);
	return (NULL);
}
