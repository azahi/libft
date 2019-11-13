/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:36:57 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/13 20:23:28 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

size_t	ft_strnlen(const char *str, size_t size)
{
	const char	*ts;

	ts = ft_memchr(str, '\0', size);
	return (ts ? (size_t)ts - (size_t)str : size);
}
