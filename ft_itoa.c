/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 16:58:47 by mariober          #+#    #+#             */
/*   Updated: 2026/10/26 16:58:48 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	int_len(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	str_bw(char *str, int neg)
{
	int		i;
	char	aux;
	int		str_l;

	str_l = ft_strlen(str) - 1;
	i = 0;
	if (neg)
	{
		i++;
	}
	while (i < str_l)
	{
		aux = str[i];
		str[i] = str[str_l];
		str[str_l] = aux;
		i++;
		str_l--;
	}
}

static size_t	iterint_operations(long n_l, size_t i, char *res)
{
	while (n_l > 0)
	{
		res[i] = (n_l % 10) + '0';
		n_l /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	i;
	long	n_l;
	int		neg;

	i = 0;
	neg = 0;
	n_l = n;
	res = malloc(int_len(n_l) + 1);
	if (!res)
		return (NULL);
	if (n_l == 0)
		res[i++] = '0';
	if (n_l < 0)
	{
		n_l *= -1;
		res[i++] = '-';
		neg = 1;
	}
	i = iterint_operations(n_l, i, res);
	res[i] = '\0';
	str_bw(res, neg);
	return (res);
}
