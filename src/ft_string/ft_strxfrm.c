/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strxfrm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 00:45:32 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 21:18:52 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

size_t	ft_strxfrm(char *dst, const char *src, size_t size)
{
	size_t	ssize;
	size_t	csize;

	ssize = ft_strlen(src);
	if (size)
	{
		csize = ssize < size ? ssize : size - 1;
		ft_memcpy(dst, src, csize);
		dst[csize] = 0;
	}
	return (ssize);
}
