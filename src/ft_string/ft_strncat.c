/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:54:01 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 00:03:28 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	s1n;
	size_t	s2n;

	s1n = ft_strlen(s1);
	s2n = ft_strlen(s2);
	if (s2n < n)
		ft_strcpy(&s1[s1n], s2);
	else
	{
		ft_strncpy(&s1[s1n], s2, n);
		s1[s1n + n] = 0;
	}
	return (s1);
}
*/

char	*strncat(char *dst, const char *src, size_t n)
{
	char		*d;
	const char	*s;
	if (n)
	{
		d = dst;
		s = src;
		while (*d != 0)
			d++;
		do
		{
			if ((*d = *s++) == 0)
				break ;
			d++;
		} while (--n);
		*d = '\0';
	}
	return (dst);
}
