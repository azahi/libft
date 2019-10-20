/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:59:39 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 20:19:26 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strncpy(char *dst, const char *src, size_t size)
{
	char	*td;

	td = dst;
	while (size--)
	{
		if ((*td++ = *(char *)src++) == '\0')
		{
			while (--size)
				*td++ = '\0';
			break ;
		}
	}
	return (dst);
}
