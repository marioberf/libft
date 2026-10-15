#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	arrlen;
	size_t	end;
	char	**arr_str;

	end = 0;
	i = 0;
	arrlen = 1;
	while (s[i])
	{
		if (s[i] == c)
			arrlen++;
		i++;
	}
	arr_str = malloc(sizeof(size_t) * arrlen);
	i = 0;
	j = 0;
	while (j < arrlen && s[j])
	{
		while (s[end] != c && s[i])
		{
			if (end == 0)
				arr_str[j] = malloc(sizeof(size_t) * (ft_strlen(ft_strchr(&s[j], c)) - j));
			arr_str[j][end] = s[i];
			end++;
			i++;
		}
		end = 0;
		j++;
	}
	return (arr_str);
}

int	main()
{
	int	i;
	char	str[11] = "Hola_Mundo";
	i = 0;
	char	**arr_str = ft_split(str, '_');
	while (i < 2)
		printf("%s\n", arr_str[i++]);
	return (0);
}

