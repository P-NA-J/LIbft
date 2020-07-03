/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:32:30 by pauljull          #+#    #+#             */
/*   Updated: 2020/07/03 14:26:48 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "prototypes.h"

void	*ft_memalloc(size_t size)
{
	void	*memory;

	memory = NULL;
	if (!(memory = (void*)malloc(sizeof(memory) * size)))
		return (NULL);
	ft_memset(memory, 0, size);
	return (memory);
}
