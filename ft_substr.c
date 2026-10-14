#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	sub_str = (char *)malloc(sizeof(size_t) * len);
	if (!sub_str)
		return (NULL);
	while (j < len)
		sub_str[j++] = s[i++];
	sub_str[j] = '\0';
	return (sub_str);
}

int	main()
{
	printf("%s\n", ft_substr("inesss", 3, 2));
	return (0);
}
