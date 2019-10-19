/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:34:03 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 23:45:56 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*ft_strnstr(const char *str, const char *find, size_t size)
{
	char	c;
	char	sc;
	size_t	sizef;

	if ((c = *find++) != '\0')
	{
		sizef = ft_strlen(find);
		while (ft_strncmp(str, find, sizef))
		{
			if ((sc = *str++) == '\0' || size-- < 1)
				return (NULL);
			while (sc != c)
				if ((sc = *str++) == '\0' || size-- < 1)
					return (NULL);
			if (sizef > size)
				return (NULL);
		}
		str--;
	}
	return ((char *)str);
}
