/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 23:11:30 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 15:04:39 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strcspn(const char *s1, const char *s2)
{
	char		c;
	char		sc;
	const char	*p;

	p = s1;
	while (1)
	{
		c = *p++;
		do
			if ((sc = *s2++) == c)
				return (p - 1 - s1);
		while (sc != '\0');
	}
}
