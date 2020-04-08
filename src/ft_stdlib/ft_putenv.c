/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 12:14:46 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 10:45:25 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

#include <ft_stdlib.h>
#include <ft_string.h>

#include "../__environ.h"
#include "__env.h"

int __putenv(char *s, size_t l, char *r)
{
	size_t		i;
	char		**e;
	static char	**oldenv;
	char		**newenv;

	i = 0;
	if (environ)
	{
		e = environ;
		while (*e)
		{
			if (!ft_strncmp(s, *e, l + 1))
			{
				*e = s;
				__env_rm_add(*e, r);
				return (0);
			}
			e++;
			i++;
		}
	}
	if (!(newenv = malloc(sizeof *newenv * (i + 2))))
		return (-1);
	if (i)
		ft_memcpy(newenv, environ, sizeof *newenv * i);
	if (environ != oldenv)
		free(oldenv);
	newenv[i] = s;
	newenv[i + 1] = NULL;
	environ = oldenv = newenv;
	if (r)
		__env_rm_add(0, r);
	return (0);
}

int	ft_putenv(char *s)
{
	size_t l;

	l = ft_strchrnul(s, '=') - s;
	if (!l || !s[l])
		return (ft_unsetenv(s));
	return (__putenv(s, l, 0));
}
