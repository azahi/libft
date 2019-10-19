/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:56:07 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 23:44:24 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*ts;
	int		flag;

	ts = (char *)src;
	flag = size ? 1 : 0;
	if (size)
	{
		while (--size)
		{
			if ((*dst++ = *src++) == '\0')
				break ;
		}
	}
	if (!size)
	{
		if (flag)
			*dst = '\0';
		while (*src++)
			;
	}
	return (src - ts - 1);
}
