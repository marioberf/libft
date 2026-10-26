/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 16:59:36 by mariober          #+#    #+#             */
/*   Updated: 2026/10/26 16:59:37 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		mod;
	int		div;
	long	n_cp;

	n_cp = n;
	if (n_cp < 0)
	{
		ft_putchar_fd('-', fd);
		n_cp *= -1;
	}
	mod = n_cp % 10;
	div = n_cp / 10;
	if (n_cp > 9)
	{
		ft_putnbr_fd(div, fd);
		ft_putchar_fd(mod + '0', fd);
	}
	else
	{
		ft_putchar_fd(n_cp + '0', fd);
		return ;
	}
}
