#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*p;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			p = (char *)&s[i];
			return (p);
		}
		i++;
	}
	p = (char *)&s[i];
	return (0);
}

/*int	main(void)
{
	printf("%s\n", ft_strchr("abc", 'a'));
	printf("%s\n", strchr("abc", 'a'));
	return (0);
}*/