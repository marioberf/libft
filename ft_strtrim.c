/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 16:47:23 by mariober          #+#    #+#             */
/*   Updated: 2026/10/10 16:47:24 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	within_str(char const s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*cp;

	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (s1[start] && within_str(s1[start], set))
	{
		start++;
	}
	while (end > start && within_str(s1[end - 1], set))
	{
		end--;
	}
	cp = (char *)malloc(sizeof(char) * (end - start + 1));
	 if (!cp)
		 return (NULL);
	i = 0;
	while (start < end)
		cp[i++] = s1[start++];
	cp[i] = '\0';
	return (cp);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
	return (0);
}*/
