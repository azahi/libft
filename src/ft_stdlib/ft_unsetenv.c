/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 12:14:48 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/15 18:39:17 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

#include <errno.h>
#include <ft_stdlib.h>
#include <ft_string.h>

#include "internal_env.h"

void		internal_env_rm_add(char *old, char *new)
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
	if (!new || !(tmp = ft_malloc(sizeof(*tmp) * (env_alloced_n + 1))))
		return ;
	ft_memcpy(tmp, env_alloced, sizeof(*tmp) * env_alloced_n);
	free(env_alloced);
	env_alloced = tmp;
	tmp[env_alloced_n++] = new;
}

static int	einval(void)
{
	errno = EINVAL;
	return (-1);
}

int			ft_unsetenv(const char *name)
{
	char		**e;
	char		**eo;
	extern char	**environ;
	size_t		l;

	if (!(l = ft_strchrnul(name, '=') - name) || name[l])
		return (einval());
	if (environ)
	{
		e = environ;
		eo = e;
		while (*e)
		{
			if (!ft_strncmp(name, *e, l) && l[*e] == '=')
				internal_env_rm_add(*e, NULL);
			else if (eo != e)
				*eo++ = *e;
			else
				eo++;
			e++;
		}
		if (eo != e)
			*eo = NULL;
	}
	return (0);
}
