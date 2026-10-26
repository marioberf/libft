/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 16:56:14 by mariober          #+#    #+#             */
/*   Updated: 2026/10/26 16:56:14 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

/* int	main()
{
	t_list *alphab;
	t_list *alphab_2;
	t_list *alphab_3;
	t_list *alphab_4;
	alphab = ft_lstnew((char *)"a");
	alphab_2 = ft_lstnew((char *)"b");
	alphab_3 = ft_lstnew((char *)"c");
	alphab_4 = ft_lstnew((char *)"d");
	ft_lstadd_back(&alphab, alphab_2);
	ft_lstadd_back(&alphab, alphab_3);
	ft_lstadd_back(&alphab, alphab_4);
	printf("%s\n", (char *)alphab->next->content);
	return (0);
} */
