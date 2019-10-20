/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:34:03 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 20:39:52 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*ft_strnstr(const char *str, const char *find, size_t size)
{
	char	fch;
	char	sch;
	size_t	fsize;

	if ((fch = *find++) != '\0')
	{
		fsize = ft_strlen(find);
		while (ft_strncmp(str, find, fsize))
		{
			if ((sch = *str++) == '\0' || size-- < 1)
				return (NULL);
			while (sch != fch)
				if ((sch = *str++) == '\0' || size-- < 1)
					return (NULL);
			if (fsize > size)
				return (NULL);
		}
		str--;
	}
	return ((char *)str);
}
