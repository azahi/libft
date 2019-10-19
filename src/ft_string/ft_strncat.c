/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:54:01 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 18:48:23 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strncat(char *dst, const char *src, size_t size)
{
	char	*td;
	char	*ts;

	if (size)
	{
		td = (char *)dst;
		ts = (char *)src;
		while (*td != '\0')
			td++;
		while (size--)
		{
			if ((*td++ = *ts++) == '\0')
				break ;
		}
		*td = '\0';
	}
	return (dst);
}
