/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:42:01 by mariober          #+#    #+#             */
/*   Updated: 2026/10/01 16:42:03 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	unsigned char	aux[3];
	ft_memcpy(aux, src, n);
	ft_memcpy(dest, aux, n);
	return (dest);
}
