/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 16:54:20 by mariober          #+#    #+#             */
/*   Updated: 2026/10/26 16:54:22 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_aux;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		lst_aux = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = lst_aux;
	}
}
