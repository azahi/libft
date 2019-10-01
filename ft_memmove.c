/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:17:10 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/09/28 14:58:34 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_last;
	char	*dst_p;
	char	*str_last;

	if (!dst && !src)
		return (NULL);
	dst_p = dst;
	if (dst_p < (char *)src)
		while (len--)
			*dst_p++ = *(char *)src++;
	else
	{
		str_last = (char *)src + len - 1;
		dst_last = dst_p + len - 1;
		while (len--)
			*dst_last-- = *str_last--;
	}
	return (dst);
}
