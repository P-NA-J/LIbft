#include "libft.h"

t_list		*uf_testmap(t_list *elem)
{
	t_list	*new;
	char	*content;
	size_t	i;

	content = ft_strdup((char *)(elem->content));
	i = 0;
	while (i < ft_strlen(content))
	{
		content[i] += 1;
		++i;
	}
	new = ft_lstnew((void const *) content, 5);
	free(content);
	return (new);
}

int	main()
{
	t_list	*new;
	t_list	*begin;
	t_list	*lst;
	t_list	*lst_2;
	t_list	*lst_3;
	t_list	*lst_4;

	lst = ft_lstnew("coucou", 7);
	lst_2 = ft_lstnew("les", 4);
	lst_3 = ft_lstnew("amis", 5);
	lst_4 = ft_lstnew("\n", 2);

	ft_lstadd(&lst_4, lst_3);
	ft_lstadd(&lst_3, lst_2);
	ft_lstadd(&lst_2, lst);
	begin = NULL;
	while (lst)
	{
		new = ft_lstnew(lst->content, lst->content_size);
		if (lst->next)
			new->next = ft_lstnew(a, lst->next->content_size);
		if (begin == NULL)
			begin = new;
		new = new->next;
		lst = lst->next;
	}
	while (begin)
	{
		printf("%s\n", (char *)begin->content);
		begin = begin->next;
	}
	return (0);
}
