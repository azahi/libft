/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stpncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 03:12:35 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 09:25:50 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_stpncpy(char *restrict dst, const char *restrict src,
		size_t size)
{
	while (size-- && (*dst++ = *src++))
		;
	return (dst);
}
