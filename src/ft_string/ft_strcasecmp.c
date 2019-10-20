/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:50:51 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 20:48:31 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>
#include <stddef.h>
#include <stdint.h>

int	ft_strcasecmp(const char *str1, const char *str2)
{
	const uint8_t	*ts1;
	const uint8_t	*ts2;

	ts1 = (const uint8_t *)str1;
	ts2 = (const uint8_t *)str2;
	while (ft_tolower(*ts1) == ft_tolower(*ts2++))
		if (*ts1++ == '\0')
			return (0);
	return (ft_tolower(*ts1) - ft_tolower(*--ts2));
}
