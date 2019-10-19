/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:04:51 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 14:54:40 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	unsigned char *tp;
	unsigned char *fp;

	if (n)
	{
		tp = (unsigned char *)d;
		fp = (unsigned char *)s;
		while (n--)
			if ((*tp++ = *fp++) == c)
				return (d);
	}
	return (NULL);
}
