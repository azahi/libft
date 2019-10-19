/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strxfrm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 00:45:32 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 00:34:54 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

size_t	ft_strxfrm(char *dst, const char *src, size_t size)
{
	size_t	sizes;
	size_t	sizec;

	sizes = ft_strlen(src);
	if (size)
	{
		sizec = sizes < size ? sizes : size - 1;
		ft_memcpy(dst, src, sizec);
		dst[sizec] = 0;
	}
	return (sizes);
}
