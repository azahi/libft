/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l64a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 11:53:18 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/17 21:18:31 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdlib.h>
#include <inttypes.h>

#define LIST "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
#define BUF_SIZE 7

static const char	g_chars[] = LIST;

char				*ft_l64a(long val)
{
	int			bsize;
	int			i;
	static char	buf[BUF_SIZE];
	uint32_t	v;

	bsize = BUF_SIZE;
	i = 0;
	v = val;
	while (bsize-- > 0)
	{
		if (!v)
		{
			*buf = '\0';
			return (0);
		}
		buf[i++] = g_chars[v & 0x3f];
		v >>= 6;
	}
	return (buf);
}
