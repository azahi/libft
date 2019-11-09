/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:08:48 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 02:49:33 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	unsigned char	*ts1;
	unsigned char	*ts2;

	ts1 = (unsigned char *)str1;
	ts2 = (unsigned char *)str2;
	/*
	if (size)
	{
		if (*ts1++ != *ts2++)
			return (*--ts1 - *--ts2);
		while (--size)
			if (*ts1++ != *ts2++)
				return (*--ts1 - *--ts2);
	}
	*/
	// TODO Test
	while (size && *ts1 == *ts2)
	{
		size--;
		ts1++;
		ts2++;
	}
	return (size ? *ts1 - *ts2 : 0);
}
