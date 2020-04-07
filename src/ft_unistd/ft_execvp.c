/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execvp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 01:22:38 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/07 14:32:30 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <ft_stdlib.h>
#include <ft_string.h>
#include <ft_unistd.h>
#include <limits.h>

#include "../__environ.h"

int	ft_execvp(const char *file, char *const argv[])
{
	const char	*p;
	const char	*path = ft_getenv("PATH");
	const char	*z;
	int			seen_eacces = 0;
	size_t		k;
	size_t		l;

	errno = ENOENT;
	if (!*file)
		return (-1);

	if (ft_strchr(file, '/'))
		return (ft_execve(file, argv, environ));

	k = ft_strnlen(file, NAME_MAX + 1);
	if (k > NAME_MAX)
	{
		errno = ENAMETOOLONG;
		return (-1);
	}

	if (!path)
		path = "/usr/local/bin:/bin:/usr/bin";
	l = ft_strnlen(path, PATH_MAX - 1) + 1;

	for (p = path;; p = z)
	{
		char b[l + k + 1];

		z = ft_strchrnul(p, ':');
		if ((size_t)(z - p) >= l)
		{
			if (!*z++)
				break ;
			continue ;
		}
		ft_memcpy(b, p, z - p);
		b[z-p] = '/';
		ft_memcpy(b + (z - p) + (z > p), file, k + 1);

		ft_execve(b, argv, environ);

		switch (errno)
		{
			case EACCES:
				seen_eacces = 1;
			case ENOENT:
			case ENOTDIR:
				break ;
			default:
				return (-1);
		}
		if (!*z++)
			break ;
	}
	if (seen_eacces)
		errno = EACCES;
	return (-1);
}
