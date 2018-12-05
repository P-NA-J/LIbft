/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 18:24:57 by pauljull          #+#    #+#             */
/*   Updated: 2018/12/05 12:14:30 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_push_back(t_list *begin_lst, void *content, size_t content_size)
{
	t_list	*node;
	t_list	*buff;

	if (!begin_lst)
		return ;
	buff = begin_lst;
	if (!(node = ft_lstnew((const void *)content, content_size)) || !begin_lst)
		return ;
	while (begin_lst->next != NULL)
		begin_lst = begin_lst->next;
	begin_lst->next = node;
	begin_lst = buff;
}
