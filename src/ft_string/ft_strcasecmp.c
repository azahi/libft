/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:50:51 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 15:01:17 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <ft_ctype.h>

int	ft_strcasecmp(const char *s1, const char *s2)
{
	const uint8_t	*us1;
	const uint8_t	*us2;

	us1 = (const uint8_t *)s1;
	us2 = (const uint8_t *)s2;
	while (ft_tolower(*us1) == tolower(*us2++))
		if (*us1++ == '\0')
			return (0);
	return (ft_tolower(*us1) - ft_tolower(*--us2));
}
