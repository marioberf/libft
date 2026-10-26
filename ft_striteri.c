/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 16:58:13 by mariober          #+#    #+#             */
/*   Updated: 2026/10/26 16:58:14 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void f_test(unsigned int i, char *s)
{
		printf("%s", "address: ");
		printf("%s\n", s);
		printf("%s", "index: ");
		printf("%i\n", i);
}*/

/*int	main()
{
	ft_striteri("123", f_test);
	return (0);
}*/
