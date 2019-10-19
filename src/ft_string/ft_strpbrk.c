/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 23:25:26 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 15:13:24 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strpbrk(const char *p, const char *s)
{
	const char	*scanp;
	int			c;
	int			sc;

	while ((c = *p++))
	{
		scanp = s;
		while ((sc = *scanp++) != '\0')
			if (sc == c)
				return ((char *)(p - 1));
	}
	return (NULL);
}
