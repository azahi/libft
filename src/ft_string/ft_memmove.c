/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:17:10 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 20:36:30 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	char	*td;
	char	*ts;

	if (!size || dst != src)
	{
		td = (char *)dst;
		ts = (char *)src;
		if ((size_t)td < (size_t)ts && (size_t)td < (size_t)ts + size)
			while (size--)
				*td++ = *ts++;
		else
		{
			td += size;
			ts += size;
			while (size--)
				*--td = *--ts;
		}
	}
	return (dst);
}
