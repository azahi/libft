/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:09:04 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/05/05 20:33:55 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

#include <ft_stdlib.h>
#include <ft_string.h>

char	*ft_strndup(const char *str, size_t size)
{
	char	*copy;
	size_t	ssize;

	ssize = ft_strnlen(str, size);
	if (!(copy = malloc(sizeof(*copy) * (ssize + 1))))
		return (NULL);
	ft_memcpy(copy, str, ssize);
	copy[ssize] = '\0';
	return (copy);
}
