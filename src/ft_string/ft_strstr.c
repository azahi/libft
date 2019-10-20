/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:01:36 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 20:39:38 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*ft_strstr(const char *str, const char *find)
{
	char	fch;
	char	sch;
	size_t	fsize;

	if ((fch = *find++) != '\0')
	{
		fsize = ft_strlen(find);
		while (ft_strncmp(str, find, fsize))
		{
			if ((sch = *str++) == '\0')
				return (NULL);
			while (sch != fch)
				if ((sch = *str++) == '\0')
					return (NULL);
		}
		str--;
	}
	return ((char *)str);
}
