/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:52:27 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 20:47:58 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *str, int ch, size_t size)
{
	unsigned char	*ts;

	ts = (unsigned char *)str;
	while (size-- && *ts != (unsigned char)ch)
		ts++;
	return (++size ? (void *)ts : NULL);
}
