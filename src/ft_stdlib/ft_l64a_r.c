/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l64a_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 11:51:07 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 13:03:14 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

int	ft_l64a_r(long value, char *buffer, int buflen)
{
	static const char	chars[] =
	    "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	uint32_t			v;

	v = value;
	while (buflen-- > 0)
	{
		if (v == 0)
		{
			*buffer = '\0';
			return (0);
		}
		*buffer++ = chars[v & 0x3f];
		v >>= 6;
	}
	return (-1);
}
