/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 12:14:48 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/05/12 12:01:40 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

#include <errno.h>
#include <ft_stdlib.h>
#include <ft_string.h>

#include "internal_env.h"

int			internal_einval(void)
{
	errno = EINVAL;
	return (-1);
}

int			ft_unsetenv(const char *name)
{
	char		**e;
	char		**eo;
	extern char **environ;
	size_t		l;

	l = ft_strchrnul(name, '=') - name;
	if (!l || name[l])
		return (internal_einval());
	if ((e = environ))
	{
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
