/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 12:14:46 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/15 18:37:11 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

#include <ft_stdlib.h>
#include <ft_string.h>

#include "internal_env.h"

int	internal_putenv(char *s, size_t l, char *r)
{
	char		**e;
	char		**newenv;
	extern char	**environ;
	size_t		i;
	static char	**oldenv;

	i = 0;
	if (environ)
	{
		e = environ;
		while (*e)
		{
			if (!ft_strncmp(s, *e, l + 1))
			{
				*e = s;
				internal_env_rm_add(*e, r);
				return (0);
			}
			e++;
			i++;
		}
	}
	if (!(newenv = ft_malloc(sizeof(*newenv) * (i + 2))))
		return (-1);
	if (i)
		ft_memcpy(newenv, environ, sizeof(*newenv) * i);
	if (environ != oldenv)
		ft_free(oldenv);
	newenv[i] = s;
	newenv[i + 1] = NULL;
	oldenv = newenv;
	environ = newenv;
	if (r)
		internal_env_rm_add(NULL, r);
	return (0);
}

int	ft_putenv(char *s)
{
	size_t l;

	l = ft_strchrnul(s, '=') - s;
	if (!l || !s[l])
		return (ft_unsetenv(s));
	return (internal_putenv(s, l, 0));
}
