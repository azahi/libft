/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:01:36 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 00:22:56 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*ft_strstr(const char *str, const char *find)
{
	char	c;
	char	sc;
	size_t	sizef;

	if ((c = *find++) != '\0')
	{
		sizef = ft_strlen(find);
		while (ft_strncmp(str, find, sizef))
		{
			if ((sc = *str++) == '\0')
				return (NULL);
			while (sc != c)
				if ((sc = *str++) == '\0')
					return (NULL);
		}
		str--;
	}
	return ((char *)str);
}
