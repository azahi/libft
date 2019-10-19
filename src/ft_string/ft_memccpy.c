/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:04:51 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 20:44:02 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int ch, size_t size)
{
	while (size--)
		if ((*(unsigned char *)dst++ = *(unsigned char *)src++) ==
				(unsigned char)ch)
			return (dst);
	return (NULL);
}
