/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:08:48 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/09/28 14:51:47 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n)
	{
		if (*(unsigned const char *)s1++ != *(unsigned const char *)s2++)
			return (*(unsigned const char*)--s1 - *(unsigned const char*)--s2);
		while (--n)
			if (*(unsigned const char *)s1++ != *(unsigned const char *)s2++)
				return (*(unsigned const char *)--s1 -
						*(unsigned const char *)--s2);
	}
	return (0);
}
