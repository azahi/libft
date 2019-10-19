/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:50:51 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 00:26:23 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>
#include <ft_string.h>
#include <stdint.h>

int	ft_strcasecmp(const char *str1, const char *str2)
{
	const uint8_t	*ustr1;
	const uint8_t	*ustr2;

	ustr1 = (const uint8_t *)str1;
	ustr2 = (const uint8_t *)str2;
	while (ft_tolower(*ustr1) == ft_tolower(*ustr2++))
		if (*ustr1++ == '\0')
			return (0);
	return (ft_tolower(*ustr1) - ft_tolower(*--ustr2));
}
