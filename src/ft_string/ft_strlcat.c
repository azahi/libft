/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:23:23 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 23:44:05 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*td;
	char	*ts;
	size_t	dsize;
	size_t	i;

	td = (char *)dst;
	ts = (char *)src;
	i = size;
	while (i-- && *dst != '\0')
		dst++;
	dsize = dst - td;
	i = size - dsize;
	if (!i--)
		return (dsize + ft_strlen(src));
	while (*src != '\0')
	{
		if (i)
		{
			*dst++ = *src;
			i--;
		}
		src++;
	}
	*dst = '\0';
	return (dsize + (src - ts));
}
