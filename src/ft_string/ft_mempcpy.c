/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mempcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 02:51:22 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 02:52:18 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

void	*ft_mempcpy(void *dst, const void *src, size_t size)
{
	return ((char *)ft_memcpy(dst, src, size) + size);
}
