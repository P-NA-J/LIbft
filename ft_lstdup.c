/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 18:24:14 by pauljull          #+#    #+#             */
/*   Updated: 2018/12/04 22:18:07 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstdup(t_list *lst)
{
	t_list	*new_cpy;
	t_list	*begin;

	if (!(new_cpy = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new_cpy = ft_lstnew((const void *)lst->content, lst->content_size);
	begin = new_cpy;
	if (lst->next)
		lst = lst->next;
	while (lst)
	{
		ft_lst_push_back(new_cpy, lst->content, lst->content_size);
		lst = lst->next;
	}
	return (begin);
}
