/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:58:52 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/09/28 14:53:26 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_p;

	if (!dst && !src)
		return (NULL);
	dst_p = dst;
	while (n--)
		*dst_p++ = *(char *)src++;
	return (dst);
}
