/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:08:48 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/13 20:14:56 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	const unsigned char	*ts1;
	const unsigned char	*ts2;

	ts1 = (const unsigned char *)str1;
	ts2 = (const unsigned char *)str2;
	while (size && *ts1 == *ts2)
	{
		size--;
		ts1++;
		ts2++;
	}
	return (size ? *ts1 - *ts2 : 0);
}
