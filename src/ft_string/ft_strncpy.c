/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:59:39 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 00:30:33 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t size)
{
	char	*d;

	d = dst;
	while (size--)
	{
		if ((*d++ = *(char *)src++) == '\0')
		{
			while (--size)
				*d++ = '\0';
			break ;
		}
	}
	return (dst);
}
