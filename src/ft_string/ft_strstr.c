/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:01:36 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 15:15:46 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*ft_strstr(const char *s, const char *find)
{
	char	c;
	char	sc;
	size_t	len;

	if ((c = *find++) != 0) {
		len = ft_strlen(find);
		do {
			do {
				if ((sc = *s++) == 0)
					return (NULL);
			} while (sc != c);
		} while (ft_strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}
