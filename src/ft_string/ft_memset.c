/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:56:54 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 03:08:30 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
void	*ft_memset(void *str, int ch, size_t size)
{
	char	*ts;

	ts = str;
	while (size-- > 0)
		*ts++ = ch;
	return (str);
}
*/
// TODO Test

#include <stdint.h>

#define STR(x) if (size <= x) return (str)

void	*ft_memset(void *str, int ch, size_t size)
{
	unsigned char	*ts;
	size_t			k;

	if (!size)
		return (str);
	ts = str;
	ts[0] = ch;
	ts[size - 1] = ch;
	STR(2);
	ts[1] = ch;
	ts[2] = ch;
	ts[size - 2] = ch;
	ts[size - 3] = ch;
	STR(6);
	ts[3] = ch;
	ts[size - 4] = ch;
	STR(8);
	k = -(uintptr_t)ts & 3;
	ts += k;
	size -= k;
	size &= -4;
	while (size--)
		*ts++ = ch;
	return (str);
}
