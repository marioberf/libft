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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l_src;
	size_t	l_dst;

	l_src = ft_strlen(src);
	l_dst = ft_strlen(dst);
	if (size <= l_dst)
		return (size + l_src);
	i = 0;
	while (src[i] && (l_dst + i < size - 1))
	{
		dst[l_dst + i] = src[i];
		i++;
	}
	dst[l_dst + i] = '\0';
	return (l_dst + l_src);
}

/*int	main()
{
	char	str1[14] = "a";
	printf("%li\n", ft_strlcat(str1, "lorem ipsum doloro sit amet", 15));
	printf("%s\n", str1);
	return (0);
}*/
