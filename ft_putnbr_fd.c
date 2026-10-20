#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	mod;
	int	div;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	mod = n % 10;
	div = n / 10;
	if (n > 9)
	{
		ft_putnbr_fd(div, fd);
		ft_putchar_fd(mod + '0', fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
		return;	
	}
}

int	main()
{
	ft_putnbr_fd(-2147483648, 1);
	return (0);
}
