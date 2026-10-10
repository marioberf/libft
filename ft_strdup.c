/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 17:25:33 by mariober          #+#    #+#             */
/*   Updated: 2026/10/10 17:25:34 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*dup;	
	int		i;

	dup = malloc(sizeof(char) * ft_strlen(s));
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*int	main()
{
	char *s1 = "abcd";

	char *s2 = ft_strdup(s1);
	printf("%s\n", s2);
}*/
