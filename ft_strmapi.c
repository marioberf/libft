/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 16:51:40 by mariober          #+#    #+#             */
/*   Updated: 2026/10/26 16:51:42 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*sol;

	i = 0;
	sol = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!sol)
		return (NULL);
	while (s[i])
	{
		sol[i] = f(i, s[i]);
		i++;
	}
	sol[i] = '\0';
	return (sol);
}

/*char	f_test(unsigned int i, char c)
{ 
	if (i == (unsigned int)(c - '0'))
		return (c);
	return ('0');
}*/

/*int	main()
{
	char	*str = "01233";
	printf("%s\n", ft_strmapi(str, f_test));
	return (0);
}*/
