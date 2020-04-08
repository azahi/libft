/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:04:51 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 09:27:26 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int ch,
		size_t size)
{
	unsigned char	*td;
	unsigned char	*ts;

	td = (unsigned char *)dst;
	ts = (unsigned char *)src;
	while (size--)
		if ((*td++ = *ts++) == (unsigned char)ch)
			return (td);
	return (NULL);
}
