#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char **arr_strs;

	arr_strs = malloc(sizeof(char) * ft_strlen(s));
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{

		}
		i++;
	}
}
