/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 00:50:08 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 17:07:47 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#define STEP tmp =*ts++,*td++ = *ts++,*td++ = tmp

void	ft_swab(const void *src, void *dst, size_t size)
{
	char			*td;
	char			*ts;
	int				n;
	unsigned long	tmp;

	if (!size)
		return ;
	n = size >> 1;
	ts = (char *)src;
	td = (char *)dst;
	while (n & 0x7)
		STEP;
	n >>= 3;
	while (n > 0)
	{
		STEP;
		STEP;
		STEP;
		STEP;
		STEP;
		STEP;
		STEP;
		STEP;
		n--;
	}
}
