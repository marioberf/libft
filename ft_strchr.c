/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:08:49 by mariober          #+#    #+#             */
/*   Updated: 2026/10/05 17:08:49 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)&s[i];
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			p = (char *)&s[i];
			return (p);
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		p = (char *)&s[i];
		return (p);
	}
	return (NULL);
}
