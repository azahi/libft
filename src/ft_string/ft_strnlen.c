/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:36:57 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 00:31:41 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strnlen(const char *str, size_t maxsize)
{
	size_t	size;

	size = 0;
	while (size < maxsize)
	{
		if (!*str)
			break ;
		size++;
		str++;
	}
	return (size);
}
