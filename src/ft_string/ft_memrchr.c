/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:43:41 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 20:48:21 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memrchr(const void *str, int ch, size_t size)
{
	unsigned char	*ts;

	if (size)
	{
		ts = (unsigned char *)str + size;
		while (size--)
			if (*(--ts) == (unsigned char)ch)
				return ((void *)ts);
	}
	return (NULL);
}
