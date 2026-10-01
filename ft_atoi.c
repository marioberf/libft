#include "libft.h"
#include <stdio.h>

int	laps(int s, int laps)
{
	int	i;

	i = 0;
	while (i < laps)
	{
		s *= 10;
	}
	return (s);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	valid_elem;

	i = 0;
	valid_elem = 0;
	while (i < int(ft_strlen(nptr)))
	{
		if (ft_isalpha(nptr[i]))
			return (valid_elem);
		if (nptr[i] >= '1' && nptr[i] <= '9')
		{
			ft_atoi(ft_memset((char)nptr[i], 0, (int)i));
			laps((nptr[i] - 48), valid_elem);
			valid_elem++;
		}
		i++;	
	}
	return (valid_elem);
}

int	main()
{
	char *str = "010";
	printf("%i\n", ft_atoi(str));
	return (0);
}