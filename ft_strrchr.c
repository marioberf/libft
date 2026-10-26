/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:08:13 by mariober          #+#    #+#             */
/*   Updated: 2026/10/05 17:08:14 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	i = ft_strlen(s);
	while (1)
	{
		if (s[i] == (char)c)
		{
			p = (char *)&s[i];
			return (p);
		}
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
