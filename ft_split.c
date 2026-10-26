/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariober <mariober@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 16:56:31 by mariober          #+#    #+#             */
/*   Updated: 2026/10/26 16:56:33 by mariober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_arr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
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
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**split_core(char const *s, char c, size_t arrlen, char **arr_str)
{
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j < arrlen)
	{
		while (s[i] == c)
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
	}
	arr_str[j] = NULL;
	return (arr_str);
}

char	**ft_split(char const *s, char c)
{
	size_t	arrlen;
	char	**arr_str;

	if (!s)
		return (NULL);
	arrlen = count_w(s, c);
	arr_str = malloc(sizeof(char *) * (arrlen + 1));
	if (!arr_str)
		return (NULL);
	arr_str[arrlen] = NULL;
	return (split_core(s, c, arrlen, arr_str));
}
