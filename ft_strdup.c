/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:52:30 by pauljull          #+#    #+#             */
/*   Updated: 2018/11/15 09:56:49 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	index;
	unsigned int	length;
	char			*str;

	length = ft_strlen(s);
	index = 0;
	if (!(str = (char *)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	while (index < length)
	{
		str[index] = s[index];
		index += 1;
	}
	str[index] = 0;
	return (str);
}
