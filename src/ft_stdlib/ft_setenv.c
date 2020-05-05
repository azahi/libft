/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 12:14:47 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/05/05 20:32:58 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

#include <errno.h>
#include <ft_stdlib.h>
#include <ft_string.h>

#include "internal_env.h"

void		internal_env_rm_add(char *old, char *new)
{
	char			**t;
	size_t			i;
	static char		**env_alloced;
	static size_t	env_alloced_n;

	i = 0;
	while (i < env_alloced_n)
	{
		if (env_alloced[i] == old)
		{
			env_alloced[i] = new;
			ft_free(old);
			return ;
		}
		else if (!env_alloced[i] && new)
		{
			env_alloced[i] = new;
			new = NULL;
		}
		i++;
	}
	if (!new)
		return ;
	t = ft_realloc(env_alloced, sizeof(*t) * (env_alloced_n + 1));
	if (!t)
		return ;
	(env_alloced = t)[env_alloced_n++] = new;
}

int			ft_setenv(const char *var, const char *value, int overwrite)
{
	char	*s;
	size_t	l1;
	size_t	l2;

	if (!var || !*var || !(l1 = ft_strchrnul(var, '=') - var))
		return (internal_einval());
	if (!overwrite && ft_getenv(var))
		return (0);
	l2 = ft_strlen(value);
	s = ft_malloc(l1 + l2 + 2);
	if (!s)
		return (-1);
	ft_memcpy(s, var, l1);
	s[l1] = '=';
	ft_memcpy(s + l1 + 1, value, l2 + 1);
	return (internal_putenv(s, l1, s));
}
