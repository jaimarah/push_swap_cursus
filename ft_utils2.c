/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:14:43 by jaimarah          #+#    #+#             */
/*   Updated: 2026/01/16 15:40:52 by jaimarah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*tdst;
	const unsigned char	*tsrc;

	if (dst == src || len == 0)
		return (dst);
	tdst = (unsigned char *)dst;
	tsrc = (const unsigned char *)src;
	i = 0;
	while (i < len)
	{
		tdst[i] = tsrc[i];
		i++;
	}
	return (dst);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	slen;

	slen = ft_strlen(src);
	if (dstsize == 0)
		return (slen);
	if (slen + 1 < dstsize)
		ft_memcpy(dst, src, slen + 1);
	else
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (slen);
}

char	*ft_strdup(const char *s1)
{
	size_t	slen;
	size_t	i;
	char	*s2;

	slen = ft_strlen(s1);
	s2 = malloc(slen + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}