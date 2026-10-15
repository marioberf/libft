#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s1_s2;
	int		s1_len;
	int		s2_len;
	size_t	i;
	size_t	j;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s1_s2 = malloc(sizeof(char) * (s1_len + s2_len) + 1);
	if (!s1_s2)
		return (NULL);
	i = 0;
	j = 0;
	while (i < s1_len)
		s1_s2[j++] = s1[i++];
	i = 0;
	while (i < s2_len)
		s1_s2[j++] = s2[i++];
	s1_s2[j] = '\0';
	return (s1_s2);
}

/*int	main()
{
	printf("%s\n", ft_strjoin("abc", "def"));
}*/
