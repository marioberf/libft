#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_aux;

	if (!lst || !del)
		return ;
	if (!*lst)
	{
		del((*lst)->content);
		free(lst);
		return ;
	}
	while (*lst)
	{
		lst_aux = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = lst_aux;
	}
}

/* int	main()
{
	t_list *alphab;
	t_list *alphab_2;
	t_list *alphab_3;
	alphab = ft_lstnew((char *)"a");
	alphab_2 = ft_lstnew((char *)"b");
	alphab_3 = ft_lstnew((char *)"c");
	ft_lstadd_front(&alphab, alphab_2);
	ft_lstadd_front(&alphab, alphab_3);
	printf("%i\n", (int)ft_lstsize(alphab));
	return (0);
} */