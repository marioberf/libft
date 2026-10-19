/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 18:41:31 by mariober          #+#    #+#             */
/*   Updated: 2026/10/01 18:41:32 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*b_s1;
	unsigned char	*b_s2;

	i = 0;
	b_s1 = (unsigned char *)s1;
	b_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (b_s1[i] != b_s2[i])
			return (b_s1[i] - b_s2[i]);
		i++;
	}
	return (0);
}

/*int	main()
{
	printf("%i\n", memcmp("abc", "abc", 0));
	printf("%i\n", ft_memcmp("abc", "abc", 0));
	return (0);
}*/