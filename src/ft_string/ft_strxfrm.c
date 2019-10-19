/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strxfrm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 00:45:32 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 15:16:29 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

size_t	ft_strxfrm(char *dst, const char *src, size_t n)
{
	size_t srclen;
	size_t copysize;

	srclen = ft_strlen(src);
	if (n)
	{
		copysize = srclen < n ? srclen : n - 1;
		ft_memcpy(dst, src, copysize);
		dst[copysize] = 0;
	}
	return (srclen);
}
