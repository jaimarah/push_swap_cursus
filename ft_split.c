/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 12:32:06 by jaimarah          #+#    #+#             */
/*   Updated: 2025/12/31 11:37:57 by jaimarah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_count_word(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] && s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static int	ft_word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*ft_copy_word(const char *s, char c)
{
	int	wlen;

	wlen = ft_word_len(s, c);
	return (ft_substr(s, 0, wlen));
}

static void	ft_free_array(char **arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(const char *s, char c)
{
	char	**arr_str;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	words = ft_count_word(s, c);
	arr_str = malloc(sizeof(char *) * (words + 1));
	if (!arr_str)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		arr_str[i] = ft_copy_word(s, c);
		if (!arr_str[i])
			return (ft_free_array(arr_str, i), NULL);
		while (*s && *s != c)
			s++;
		i++;
	}
	arr_str[i] = 0;
	return (arr_str);
}
