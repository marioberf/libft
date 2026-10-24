#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void  *))
{
	size_t	i;

	if (!lst)
		return ;
	i = 0;
	while (i < (size_t)ft_lstsize(lst))
	{
		f(lst->content);
		lst = lst->next;
		i++;
	}
}