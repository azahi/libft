/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:23:23 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 21:17:56 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

#include <ft_string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l;

	l = ft_strnlen(dst, size);
	if (l == size)
		return (l + ft_strlen(src));
	return (l + ft_strlcpy(dst + l, src, size - l));
}
