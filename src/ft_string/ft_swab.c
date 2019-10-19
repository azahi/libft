/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 00:50:08 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 15:16:48 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#define STEP tmp =*fp++,*tp++ = *fp++,*tp++ = tmp

void	ft_swab(const void *from, void *to, size_t len)
{
	char			*tp;
	unsigned long	tmp;
	char			*fp;
	int				n;

	if (len <= 0)
		return ;
	n = len >> 1;
	fp = (char *)from;
	tp = (char *)to;
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
