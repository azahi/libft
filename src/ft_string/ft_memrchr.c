/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:43:41 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 15:00:10 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memrchr(const void *s, int c, size_t n)
{
	const unsigned char *cp;

	if (n != 0) {
		cp = (unsigned char *)s + n;
		do {
			if (*(--cp) == (unsigned char)c)
				return ((void *)cp);
		} while (--n != 0);
	}
	return (NULL);
}
