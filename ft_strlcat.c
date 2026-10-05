/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:08:37 by mariober          #+#    #+#             */
/*   Updated: 2026/10/05 17:08:38 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (dst[i] && (i < size))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

/*int	main()
{
	char	str1[10] = "irene";
	char	str2[] = "ines";
	printf("%li\n", strlcat(str1, str2, sizeof(str1)));
	printf("%s\n", str1);
	printf("%s\n", str2);
	return (0);
}*/
