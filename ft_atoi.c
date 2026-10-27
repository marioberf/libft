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

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

static	long long	turns_int(const char *nptr, int neg, size_t i)
{
	long long	sol;
	size_t		digits;

	sol = 0;
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

int	ft_atoi(const char *nptr)
{
	size_t		i;
	int			neg;

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
	return (turns_int(nptr, neg, i));
}
