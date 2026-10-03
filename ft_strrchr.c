#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	*p;

	i = ft_strlen(s);
	while (s[i] >= 0)
	{
		if (s[i] == c)
		{
			p = (char *)&s[i];
			return (p);
		}
		i--;
	}
	p = (char *)NULL;
	return (p);
}

/*int main()
{
	//printf("%s\n", strrchr("inese", 'l'));
	printf("%s\n", ft_strrchr("inese", 'l'));
	return (0);
}*/