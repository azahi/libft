/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:08:48 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 14:55:02 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n)
	{
		if (*(unsigned char *)s1++ != *(unsigned char *)s2++)
			return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
		while (--n)
			if (*(unsigned char *)s1++ != *(unsigned char *)s2++)
				return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
	}
	return (0);
}
