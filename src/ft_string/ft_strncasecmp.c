/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 23:28:13 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 20:50:50 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>
#include <stddef.h>
#include <stdint.h>

int	ft_strncasecmp(const char *str1, const char *str2, size_t size)
{
	const uint8_t	*ts1;
	const uint8_t	*ts2;

	ts1 = (const uint8_t *)str1;
	ts2 = (const uint8_t *)str2;
	if (size)
	{
		while (size--)
		{
			if (ft_tolower(*ts1) != ft_tolower(*ts2++))
				return (ft_tolower(*ts1) - ft_tolower(*--ts2));
			if (*ts1++ == '\0')
				break ;
		}
	}
	return (0);
}
