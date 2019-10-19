/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 00:50:08 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 00:36:02 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#define STEP tmp =*fp++,*tp++ = *fp++,*tp++ = tmp

void	ft_swab(const void *src, void *dst, size_t size)
{
	char			*tp;
	unsigned long	tmp;
	char			*fp;
	int				n;

	if (size <= 0)
		return ;
	n = size >> 1;
	fp = (char *)src;
	tp = (char *)dst;
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
