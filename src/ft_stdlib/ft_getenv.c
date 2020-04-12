/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 12:04:53 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/12 16:18:02 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

#include <ft_string.h>

char	*ft_getenv(const char *name)
{
	size_t		l;
	char		**e;
	extern char	**environ;

	l = ft_strchrnul(name, '=') - name;
	if (l && !name[l] && environ)
	{
		e = environ;
		while (*e)
		{
			if (!ft_strncmp(name, *e, l) && l[*e] == '=')
				return (*e + l + 1);
			e++;
		}
	}
	return (0);
}
