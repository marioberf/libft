#include "libft.h"

static char	**free_arr(char **arr)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(*arr))
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static size_t	count_w(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	arrlen;

	arrlen = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && j != 1)
		{
			arrlen++;
			j = 1;
		}
		if (s[i] == c && j == 1)
		{
			j = 0;
		}
		i++;
	}
	return (arrlen);
}

static size_t	word_len(char const *s, char c)
{
    size_t len = 0;

    while (s[len] && s[len] != c)
        len++;
    return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	arrlen;
	size_t	len;
	char	**arr_str;

	if (!s)
		return (NULL);
	arrlen = count_w(s, c);
	arr_str = malloc(sizeof(char *) * arrlen + 1);
	i = 0;
	j = 0;
	while (j < arrlen)
	{
		i++;
		len = word_len(&s[i], c);
		while (s[i] != c && s[i])
		{
			arr_str[j] = malloc(len + 1);
			if (!arr_str[j])	
				return (free_arr(arr_str));
			arr_str[j] = ft_memcpy(arr_str[j], &s[i], len);
			arr_str[j][len] = '\0';
			i += len;
			j++;
		}
		arr_str[j] = NULL;
	}
	return (arr_str);
}

/* int	main()
{
	int	i;
	char	str[] = " Hola  Mundo_1   n      osu";
	i = 0;
	char	**arr_str = ft_split(str, ' ');
	while (i < 4)
		printf("%s\n", arr_str[i++]);
	return (0);
}
 */