/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l64a_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 11:51:07 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 23:55:06 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

#define LIST "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"

static const char	g_chars[] = LIST;

int					ft_l64a_r(long value, char *buffer, int buflen)
{
	uint32_t	v;

	v = value;
	while (buflen-- > 0)
	{
		if (!v)
		{
			*buffer = '\0';
			return (0);
		}
		*buffer++ = g_chars[v & 0x3f];
		v >>= 6;
	}
	return (-1);
}
