#include "libft.h"
#include <stdio.h>

// TODO: arreglar error en max int segfault
int	ft_atoi(const char *nptr)
{
	size_t	i;
	size_t	j;
	size_t	multi;
	size_t	sol;

	sol = 0;
	i = 0;
	if (nptr[0] == '-' || nptr[0] == '+')
		i = 1;
	ft_strtrim(nptr, " \\f\\n\\r\\t\\v");

	multi = 1;
	j = i;
	while (j < ft_strlen(nptr) - 1)
	{
		if (!ft_isdigit(nptr[j]))
		{
			multi /= 10;
			break;
		}
		if (!ft_isdigit(nptr[j + 1]) && !nptr[j + 2])
			multi /= 10;
		multi *= 10;
		j++;
	}
	while (nptr[i])
	{
		if (!ft_isdigit(nptr[i]))
			break;
		sol += (nptr[i] - 48) * multi;
		multi /= 10;
		i++;
	}
	if (nptr[0] == '-')
		sol *= -1;
	return (sol);
}
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%i\n", atoi(argv[1]));
	printf("%i\n", ft_atoi(argv[1]));
	return (0);
}
