#include "libft.h"

static int	int_len(int n)
{
	size_t	len;

	len = 0;
	while(n > 1)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int	decimal_rep(int len)
{
	size_t	i;
	size_t	sol; 

	i = 0;
	sol = 1;
	while (i < (size_t)len)
	{
		sol *= 10;
		i++;
	}
	return (sol);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	i;
	int	len;

	len = int_len(n) + 1;
	res = malloc(sizeof(len + 1));
	i = 0;
	while (i <= (size_t)len)
	{
		if (i == 0)
			res[i] = (n / decimal_rep(len - 1)) + '0';
		else if (i < (size_t)len)
			res[i] = ((n / decimal_rep(len - 1)) % decimal_rep(len - 1)) + '0';
		else if (i == (size_t)len)
			res[i] = ((n % decimal_rep(len - 1)) + '0');
		len--;
		i++;
	}
	return res;
}

/*int	main()
{
	printf("%s\n", ft_itoa(123));
	return (0);
}*/