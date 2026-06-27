/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahino- <azahino-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:11:12 by azahino-          #+#    #+#             */
/*   Updated: 2026/06/27 20:37:40 by azahino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	f_strlen(char *str)
{
	size_t	size;

	if (!str)
		return (0);
	size = 0;
	while (*str)
	{
		str++;
		size++;
	}
	return (size);
}

static void	*f_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (char *) dest;
	s = (const char *)src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

char	*f_strdup(char *s)
{
	char	*copy;
	size_t	l;

	if (!s)
		return (NULL);
	l = f_strlen(s);
	copy = malloc(l + 1);
	if (copy == NULL)
		return (NULL);
	else
	{
		f_memcpy(copy, s, l);
		copy[l] = '\0';
	}
	return (copy);
}

char	*f_strjoin(char *s1, char *s2)
{
	char	*res;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len1 = f_strlen(s1);
	len2 = f_strlen(s2);
	res = malloc(len1 + len2 + 1);
	if (!res)
		return (NULL);
	f_memcpy(res, s1, len1);
	f_memcpy(res + len1, s2, len2);
	res[len1 + len2] = '\0';
	return (res);
}

char	*f_substr(char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= f_strlen(s))
		return (f_strdup(""));
	if (len > (f_strlen(s) - start))
		len = f_strlen(s) - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		sub[i] = s[start];
		start++;
		i++;
		len--;
	}
	sub[i] = '\0';
	return (sub);
}