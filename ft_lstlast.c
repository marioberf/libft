/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 16:59:57 by mariober          #+#    #+#             */
/*   Updated: 2026/10/26 16:59:58 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
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
	printf("%s\n", (char *)ft_lstlast(alphab));
	return (0);
} */
