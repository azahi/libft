/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:45:48 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 15:02:37 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>
#include <ft_string.h>

char	*ft_strcasestr(const char *s, const char *find)
{
	char	c;
	char	sc;
	size_t	len;

	if ((c = *find++))
	{
		c = ft_tolower((unsigned char)c);
		len = ft_strlen(find);
		do
		{
			do
			{
				if  (!(sc = *s++))
					return (NULL);
			} while ((char)ft_tolower((unsigned char)sc));
		} while (ft_strncasecmp(s, find, len));
		s--;
	}
	return ((char *)s);
}
