/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:34:03 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 00:13:23 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t		i;
	size_t		j;
	size_t		k;
	int			flag;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	i = 0;
	flag = 0;
	while (haystack[i] && !flag && i < n)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			k = i;
			flag = 1;
			while (needle[j] && haystack[k] && j < n && k < n)
				if (needle[j++] != haystack[k++])
					flag = 0;
			if (flag && !needle[j])
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
*/

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	char	c;
	char	sc;
	size_t	len;

	if ((c = *find++) != '\0')
	{
		len = strlen(find);
		do {
			do {
				if (slen-- < 1 || (sc = *s++) == '\0')
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (ft_strncmp(s, find, len));
		s--;
	}
	return ((char *)s);
}
