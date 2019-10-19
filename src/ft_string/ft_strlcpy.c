/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:56:07 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 13:10:10 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	const char *osrc;
	size_t nleft;

	osrc = src;
	nleft = dsize;
	if (nleft != 0)
	{
		while (--nleft != 0)
		{
			if ((*dst++ = *src++) == '\0')
				break ;
		}
	}
	if (nleft == 0)
	{
		if (dsize != 0)
			*dst = '\0';
		while (*src++)
			;
	}
	return(src - osrc - 1);
}

