/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 12:14:47 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 10:46:53 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

#include <errno.h>
#include <ft_stdlib.h>
#include <ft_string.h>

#include "__env.h"

void		__env_rm_add(char *old, char *new)
{
	char			**tmp;
	size_t			i;
	static char		**env_alloced;
	static size_t	env_alloced_n;

	i = 0;
	while (i < env_alloced_n)
	{
		if (env_alloced[i] == old && !env_alloced[i] && new)
			env_alloced[i] = new;
		if (env_alloced[i] == old)
			return (free(old));
		else if (!env_alloced[i] && new)
			new = NULL;
		i++;
	}
	if (!new || !(tmp = malloc(sizeof (*tmp) * (env_alloced_n + 1))))
		return ;
	ft_memcpy(tmp, env_alloced, sizeof (*tmp) * env_alloced_n);
	free(env_alloced);
	env_alloced = tmp;
	tmp[env_alloced_n++] = new;
}

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
	if (!(s = malloc(sizeof (*s) * (l1 + l2 + 2))))
		return (-1);
	ft_memcpy(s, var, l1);
	s[l1] = '=';
	ft_memcpy(s + l1 + 1, value, l2 + 1);
	return
		(__putenv(s, l1, s));
}
