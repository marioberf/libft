/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 20:00:33 by mariober          #+#    #+#             */
/*   Updated: 2026/10/09 20:00:34 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*m;
	size_t	i;

	if (!nmemb || !size)
	{
		m = malloc(0);
		return (m);
	}
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	m = malloc(nmemb * size);
	if (!m)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		((char *)m)[i] = '\0';
		i++;
	}
	return (m);
}
