/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 23:28:13 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 00:30:14 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>
#include <ft_string.h>
#include <stdint.h>

int	ft_strncasecmp(const char *str1, const char *str2, size_t size)
{
	const uint8_t	*ustr1;
	const uint8_t	*ustr2;

	ustr1 = (const uint8_t *)str1;
	ustr2 = (const uint8_t *)str2;
	if (size)
	{
		while (size--)
		{
			if (ft_tolower(*ustr1) != ft_tolower(*ustr2++))
				return (ft_tolower(*ustr1) - ft_tolower(*--ustr2));
			if (*ustr1++ == '\0')
				break ;
		}
	}
	return (0);
}
