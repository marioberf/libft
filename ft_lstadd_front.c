/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 16:58:38 by mariober          #+#    #+#             */
/*   Updated: 2026/10/26 16:58:40 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = (*lst);
	*lst = new;
}

/*int	main()
{
	t_list *alphab;
	t_list *alphab_2;
	alphab = ft_lstnew((char *)"a");
	alphab_2= ft_lstnew((char *)"b");
	ft_lstadd_front(&alphab, alphab_2);
	printf("%s ", (char *)alphab);
	printf("%s\n", (char *)alphab->next);
	return (0);
}*/
