/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:07:26 by mariober          #+#    #+#             */
/*   Updated: 2026/10/05 17:07:28 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
	
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else if (((unsigned char *)s1)[i] == '\0' || ((unsigned char *)s2)[i] == '\0')
			break ;
		i++;
	}
	return (0);
}

/*int	main()
{
	printf("%i\n", strncmp("abc", "abc", 3));
	printf("%i\n", ft_strncmp("abc", "abc", 3));
	return (0);
}*/
