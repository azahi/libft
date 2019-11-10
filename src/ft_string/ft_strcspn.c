/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 03:23:19 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 03:34:55 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

#define ST size_t
#define SO sizeof
#define BITOP(a,b,op) ((a)[(ST)(b)/(8*SO *(a))] op (ST)1<<((ST)(b)%(8*SO *(a))))

size_t	ft_strcspn(const char *str, const char *reject)
{
	const char	*a;
	size_t		byteset[32 / sizeof(size_t)];

	a = str;
	if (!reject[0] || !reject[1])
		return (ft_strchrnul(str, *reject) - a);
	ft_memset(byteset, 0, sizeof(byteset));
	while (*reject && BITOP(byteset, *(unsigned char *)reject, |=))
		reject++;
	while (*reject && BITOP(byteset, *(unsigned char *)str, &))
		str++;
	return (str - a);
}
