/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:01:36 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/09/09 18:26:23 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		flag;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	i = 0;
	flag = 0;
	while (haystack[i] && !flag)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			k = i;
			flag = 1;
			while (needle[j] && haystack[k])
				if (needle[j++] != haystack[k++])
					flag = 0;
			if (flag && !needle[j])
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
