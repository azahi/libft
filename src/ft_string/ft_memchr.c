/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:52:27 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 00:16:38 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *str, int ch, size_t size)
{
	while (size-- && *(unsigned char *)str != (unsigned char)ch)
		str++;
	return (++size ? (void *)str : NULL);
}
