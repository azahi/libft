/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stpncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 03:12:35 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 03:14:11 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_stpncpy(char *dst, const char *src, size_t size)
{
	while (size-- && (*dst++ = *src++))
		;
	return (dst);
}