/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 19:27:03 by mariober          #+#    #+#             */
/*   Updated: 2026/10/05 19:27:04 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while ((i < len) && big[i] != '\0')
	{
		while (little[j] != '\0')
		{
			if (!(big[i] == little[j]))
				break;
			else  if (j == ft_strlen(little))
				return (&((char *)big)[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

int	main()
{
	const char *str_big = "Foo Bar Baz";
	const char *str_little =  "Bar";

	printf("%s\n", strnstr(str_big, str_little, 8));
	printf("%s\n", ft_strnstr(str_big, str_little, 8));
	return (0);
}
