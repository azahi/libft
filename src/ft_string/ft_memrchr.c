/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:43:41 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/13 20:11:18 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memrchr(const void *str, int ch, size_t size)
{
	unsigned char	*ts;

	ts = (unsigned char *)str;
	while (size--)
		if (ts[size] == ch)
			return ((void *)(ts + size));
	return (NULL);
}
