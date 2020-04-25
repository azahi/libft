/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 12:14:47 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/15 18:43:29 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

#include <errno.h>
#include <ft_stdlib.h>
#include <ft_string.h>

#include "internal_env.h"

static int	einval(void)
{
	errno = EINVAL;
	return (-1);
}

int			ft_setenv(const char *var, const char *value, int overwrite)
{
	char	*s;
	size_t	l1;
	size_t	l2;

	if (!var || !(l1 = ft_strchrnul(var, '=') - var) || var[l1])
		return (einval());
	if (!overwrite && ft_getenv(var))
		return (0);
	l2 = ft_strlen(value);
	if (!(s = ft_malloc(sizeof(*s) * (l1 + l2 + 2))))
		return (-1);
	ft_memcpy(s, var, l1);
	s[l1] = '=';
	ft_memcpy(s + l1 + 1, value, l2 + 1);
	return (internal_putenv(s, l1, s));
}
