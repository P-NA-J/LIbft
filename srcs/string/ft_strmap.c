/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:34:12 by pauljull          #+#    #+#             */
/*   Updated: 2020/07/03 14:40:37 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = 0;
	if (s != NULL)
	{
		str = ft_strdup(s);
		if (!str)
			return (NULL);
	}
	else
		return (NULL);
	while (str[i] != 0)
	{
		str[i] = f(str[i]);
		i += 1;
	}
	return (str);
}
