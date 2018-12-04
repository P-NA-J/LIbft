#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;
	new->next = *alst;
}

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*node;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		if (!(node->content = malloc(content_size)))
			return (NULL);
		memcpy(node->content, content, content_size);
		node->content_size = content_size;
	}
	node->next = NULL;
	return (node);
}

void	ft_lst_push_back(t_list *begin_lst, void *content, size_t content_size)
{
	t_list	*node;
	t_list	*buff;

	buff = begin_lst;
	if (!(node = ft_lstnew((const void *)content, content_size)) || !begin_lst)
		return ;
	while (begin_lst->next != NULL)
		begin_lst = begin_lst->next;
	begin_lst->next = node;
	begin_lst = buff;
}

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

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list	*new;
	t_list	*begin;

	if (!f || !lst || !(new = ft_lstdup(lst)))
		return (NULL);
	begin = new;
	while (new)
	{
		new = f(new);
		new = new->next;
	}
	return (begin);
}

t_list	*f(t_list *lst)
{
	*((char *)lst->content) += 1;
	return (lst);
}

int main()
{
	t_list	*begin;
	t_list	*copy;

	begin = ft_lstnew("coucou", sizeof("coucou"));
	ft_lst_push_back(begin, "les", sizeof("les"));
 	ft_lst_push_back(begin, "amis", sizeof("amis"));

	copy = ft_lstmap(begin, &f);
	while (copy)
	{
		printf("%s\n", (char *)copy->content);
		copy = copy->next;
	}
	return (0);
}
