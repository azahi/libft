/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 12:14:48 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/13 01:02:02 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <ft_string.h>

#include "env.h"

static int	einval(void)
{
	errno = EINVAL;
	return (-1);
}

int			ft_unsetenv(const char *name)
{
	char	**e;
	char	**eo;
	size_t	l;

	l = ft_strchrnul(name, '=') - name;
	if (!l || name[l])
		return(einval());
	if (environ)
	{
		e = environ;
		eo = e;
		while (*e)
		{
			if (!ft_strncmp(name, *e, l) && l[*e] == '=')
				__env_rm_add(*e, 0);
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
