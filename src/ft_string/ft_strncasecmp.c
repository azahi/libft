/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 23:28:13 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 15:11:59 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>
#include <stddef.h>
#include <stdint.h>

int	ft_strncasecmp(const char *s1, const char *s2, size_t n)
{
	const uint8_t	*us1;
	const uint8_t	*us2;

	us1 = (const uint8_t *)s1;
	us2 = (const uint8_t *)s2;
	if (n)
	{
		do
		{
			if (ft_tolower(*us1) != ft_tolower(*us2++))
				return (ft_tolower(*us1) - ft_tolower(*--us2));
			if (*us1++ == '\0')
				break ;
		} while (--n);
	}
	return (0);
}
