#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	arrlen;
	size_t	end;
	char	**arr_str;

	i = 0;
	arrlen = 1;
	while (s[i])
	{
		if (s[i] == c)
			arrlen++;
		i++;
	}
	arr_str = malloc(sizeof(size_t) * arrlen);
	end = 0;
	i = 0;
	j = 0;
	while (j < arrlen && s[j])
	{
		while (s[i] != c && s[i])
		{
			if (end == 0)
				arr_str[j] = malloc(sizeof(size_t) * (ft_strlen(ft_strchr(&s[j], c))) + 1);
			arr_str[j][end] = s[i];
			end++;
			i++;
		}
		arr_str[j][end] = '\0';
		if (s[i] == c)
			i++;
		end = 0;
		j++;
	}
	i = 0;
	while (i < j)
	{
		free(arr_str[j]);
		i++;
	}
	return (arr_str);
}

int	main()
{
	int	i;
	char	str[17] = "Hola_Mundo_1_osu";
	i = 0;
	char	**arr_str = ft_split(str, '_');
	while (i < 4)
		printf("%s\n", arr_str[i++]);
	return (0);
}
