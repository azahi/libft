/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:43:41 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 00:19:37 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memrchr(const void *str, int ch, size_t size)
{
	const unsigned char *cp;

	if (size)
	{
		cp = (unsigned char *)str + size;
		while (size--)
			if (*(--cp) == (unsigned char)ch)
				return ((void *)cp);
	}
	return (NULL);
}
