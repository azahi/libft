/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:59:39 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 15:12:13 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*d;

	d = dst;
	while (n--)
	{
		if ((*d++ = *(char *)src++) == '\0')
		{
			while (--n)
				*d++ = '\0';
			break ;
		}
	}
	return (dst);
}
