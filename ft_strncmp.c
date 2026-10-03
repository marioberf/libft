#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	count;
	size_t	count_sign;

	i = 0;
	count = 0;
	count_sign = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
			count++;
		else if (s1[i] > s2[i])
			count_sign++;
		else if (s1[i] < s2[i])
			count_sign--;
		i++;
	}
	if (count == n)
		return (0);
	else if (count_sign > n/2)
		return (1);
	else if (count_sign < n/2)
		return (-1);
	return (0);
}

int	main()
{
	printf("%i\n", strncmp("ac", "abc", 3));
	printf("%i\n", ft_strncmp("ac", "abc", 3));
	return (0);
}