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
	size_t	len;

	len = nmemb;
	if (!nmemb || !size)
	{
		m = malloc(1);
		return (m);
	}
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	m = malloc(len * size);
	if (!m)
		return (NULL);
	i = 0;
	while (i < len)
	{
		((char *)m)[i] = '\0';
		i++;
	}
	return (m);
}

/*int	main()
{
	char	*str;

	str = calloc(2, sizeof(char) * 2);
	printf("%s\n", str);
	str[0] = 'a';
	printf("%s\n", str);
	str[1] = 'b';
	printf("%s\n", str);
	char	*str2;

	printf("\n");
	str2 = ft_calloc(2, sizeof(char) * 2);
	printf("%s\n", str2);
	str2[0] = 'a';
	printf("%s\n", str2);
	str2[1] = 'b';
	printf("%s\n", str2);
	return (0);
}*/
