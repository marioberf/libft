#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*cp;

	start = 0;
	end = ft_strlen(s1) - ft_strlen(set);
	i = 0;
	while (i < end && ft_strncmp(&s1[start], set, ft_strlen(set)) == 0)
	{
		start += ft_strlen(set) ;
		i++;
	}
	while (end > 0 && ft_strncmp(&s1[end], set, ft_strlen(set)) == 0)
	{
		end -= ft_strlen(set);
	}
	cp = (char *)malloc(sizeof(char) * (end - start + 1));
	 if (!cp)
		 return NULL;
	i = 0; 
	while (start <= end)
		cp[i++] = s1[start++];
	return (cp);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
	return (0);
}*/
