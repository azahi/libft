/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:36:57 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 13:10:26 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stddef.h>

size_t	ft_strnlen(const char *str, size_t size)
{
	size_t	ssize;

	ssize = 0;
	while (ssize < size)
	{
		if (!*str)
			break ;
		ssize++;
		str++;
	}
	return (ssize);
}
*/
// TODO Test

#include <ft_string.h>

size_t	ft_strnlen(const char *str, size_t size)
{
	const char	*ts;

	ts = ft_memchr(str, '\0', size);
	return (ts ? (size_t)ts - (size_t)str : size);
}
