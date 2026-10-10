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

static long long	multi_f(size_t j, long long multi, const char *nptr)
{
	while (j < ft_strlen(nptr) - 1)
	{
		if (!ft_isdigit(nptr[j]))
		{
			multi /= 10;
			break ;
		}
		if (!ft_isdigit(nptr[j + 1]) && !nptr[j + 2])
			multi /= 10;
		multi *= 10;
		j++;
	}
	return (multi);
}

int	ft_atoi(const char *nptr)
{
	size_t		i;
	size_t		j;
	long long	multi;
	long long	sol;

	sol = 0;
	i = 0;
	if (nptr[0] == '-' || nptr[0] == '+')
		i = 1;
	ft_strtrim(nptr, " \\f\\n\\r\\t\\v");
	j = i;
	multi = multi_f(j, 1, nptr);
	while (nptr[i])
	{
		if (!ft_isdigit(nptr[i]))
			break ;
		sol += (nptr[i] - 48) * multi;
		multi /= 10;
		i++;
	}
	if (nptr[0] == '-')
		sol *= -1;
	return (sol);
}
/*nt	main(int argc, char **argv)
{
	(void)argc;
	printf("%i\n", atoi(argv[1]));
	printf("%i\n", ft_atoi(argv[1]));
	return (0);
}*/
