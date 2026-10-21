#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	if (lst)
		return (1 + ft_lstsize(lst->next));
	return (0);
}

/*int	main()
{
	t_list *alphab;
	t_list *alphab_2;
	t_list *alphab_3;
	alphab = ft_lstnew((char *)'a');
	alphab_2 = ft_lstnew((char *)'b');
	alphab_3 = ft_lstnew((char *)'c');
	ft_lstadd_front(&alphab, alphab_2);
	ft_lstadd_front(&alphab, alphab_3);
	printf("%i\n", ft_lstsize(alphab));
	return (0);
}*/