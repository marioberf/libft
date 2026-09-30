#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < c)
	{
		((int *)s)[i++] = c;
	}
	return (s);
}