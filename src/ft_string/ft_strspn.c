/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 03:23:19 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 03:34:38 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

#define ST size_t
#define SO sizeof
#define BITOP(a,b,op) ((a)[(ST)(b)/(8*SO *(a))] op (ST)1<<((ST)(b)%(8*SO *(a))))

size_t	ft_strspn(const char *str, const char *accept)
{
	const char	*a;
	size_t		byteset[32 / sizeof(size_t)];

	a = str;
	ft_memset(byteset, 0, sizeof(byteset));
	if (!accept[0])
		return (0);
	if (!accept[1])
	{
		while (*str == *accept)
			str++;
		return (str - a);
	}
	while (*accept && BITOP(byteset, *(unsigned char *)accept, |=))
		accept++;
	while (*accept && BITOP(byteset, *(unsigned char *)str, &))
		str++;
	return (str - a);
}
