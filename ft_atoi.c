/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 16:47:38 by mariober          #+#    #+#             */
/*   Updated: 2026/10/10 16:47:41 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	long long	sol;
	size_t		i;
	int		neg;
	size_t		digits;

	sol = 0;
	i = 0;
	neg = 0;
	while (ft_isspace(nptr[i]))
		i++;
	while (nptr[i] == '0')
		i++;
	if (nptr[i] == '-')
	{
		neg = 1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i])
	{
		if (!ft_isdigit(nptr[i]))
			break ;
		digits++;
		sol = sol * 10 + (nptr[i] - '0');
		i++;
	}
	if (neg)
		sol *= -1;
	return (sol);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("%i\n", atoi(NULL));
	//printf("%i\n", ft_atoi(NULL));
	return (0);
}*/
