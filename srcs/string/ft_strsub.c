/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:53:24 by pauljull          #+#    #+#             */
/*   Updated: 2020/07/03 14:38:30 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	count;

	count = 0;
	if (!(str = ft_strnew(len)) || !s)
		return (NULL);
	while (count < len)
	{
		str[count] = s[start + count];
		count += 1;
	}
	return (str);
}
