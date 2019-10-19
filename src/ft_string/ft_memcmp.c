/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:08:48 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 23:42:02 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	if (size)
	{
		if (*(unsigned char *)str1++ != *(unsigned char *)str2++)
			return (*(unsigned char *)--str1 - *(unsigned char *)--str2);
		while (--size)
			if (*(unsigned char *)str1++ != *(unsigned char *)str2++)
				return (*(unsigned char *)--str1 - *(unsigned char *)--str2);
	}
	return (0);
}
