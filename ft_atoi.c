#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_iswhitespace(char c)
{
	if (c != ' ' && c != '\f' && c != '\n' && c != '\r'  && c != '\t' && c != '\v')
	{
		return (1);
	}
	return (0);
}

static int	ft_toint(unsigned const char *str)
{
	int	n;
	int	i;
	int	multi;

	n = 0;
	i = ft_strlen(str) - 1;
	multi = 1;
	while (i >= 0)
	{
		n += (str[i] - 48) * multi;
		i--;
		multi *= 10;
	}
	return (n);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	aux;

	i = 0;
	n = 0;
	aux = 0;
	while (nptr[i])
	{
		if (ft_isdigit(nptr[i]))
		{
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%i\n", atoi(argv[1]));
	printf("%i\n", ft_atoi(argv[1]));
	return (0);
}