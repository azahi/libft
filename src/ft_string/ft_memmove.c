/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:17:10 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 14:59:34 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst0, const void *src0, size_t length)
{
	char	*dst;
	char	*src;

	if (length || dst0 != src0)
	{
		dst = (char *)dst0;
		src = (char *)src0;
		if (((size_t)dst < (size_t)src) &&
			((size_t)dst < (size_t)src + length))
		{
			src += length;
			dst += length;
			while (length--)
				*--dst = *--src;
		}
		else
		{
			while (length--)
				*dst++ = *src++;
		}
	}
	return ((char *)dst0);

}
