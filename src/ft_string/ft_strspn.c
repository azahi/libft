/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 23:17:27 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 02:19:54 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strspn(const char *s1, const char *s2)
{
	char		c;
	char		sc;
	const char	*p;

	p = s1;
	while (1)
	{
		c = *p++;
		while ((sc = *s2++) != '\0')
			if (sc == c)
				continue ;
		return (p - 1 - s1);
	}
}
