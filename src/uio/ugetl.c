/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ugetl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 20:11:29 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/05/14 15:34:11 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

#include <ft_stdlib.h>
#include <ft_string.h>
#include <ft_unistd.h>

/*
** FIXME This is so broken in many ways and I'm too lazy to fix this.
**
** Apparently, if the string that is being read will not contain '\n' in the
** span of UGET_BUFFER, we will get memory errors, specifically, a heap
** overflow.
** ASAN will notice this, so will valgrind. I haven't found a way to make
** a program (minishell) fail in that way but this will definitely piss someone
** off, as much as it does me now.
**
** Meanwhile I'll make a stupid little *hack* and make the reading buffer
** bigger and hope that we will never encounter a really big string.
*/

#define UGETL_BUFFER 1024

static int	buildstr(char **restrict lineptr, const char buf[], size_t size)
{
	char	*tmp;
	size_t	lsize;

	if (!*lineptr)
	{
		if (!(*lineptr = ft_strndup(buf, size)))
			return (-1);
	}
	else
	{
		lsize = ft_strlen(*lineptr);
		if (!(tmp = ft_malloc(sizeof(*tmp) * (lsize + size))))
			return (-1);
		ft_memcpy(tmp, *lineptr, lsize);
		ft_free(*lineptr);
		ft_memcpy(tmp, buf, size);
		*lineptr = tmp;
		return (0);
	}
	return (0);
}

ssize_t		ugetl(char **restrict lineptr)
{
	char	*tmp;
	char	buf[UGETL_BUFFER];
	int		flag;
	ssize_t	size;
	ssize_t	size_final;

	flag = 0;
	size_final = 0;
	while ((size = read(STDIN_FILENO, buf, UGETL_BUFFER)) > 0)
	{
		if ((tmp = ft_strchr(buf, '\n')))
		{
			size = tmp - buf;
			flag = 1;
		}
		buf[size] = '\0';
		size_final += size;
		if (buildstr(lineptr, buf, size) == -1)
			return (-1);
		if (flag)
			break ;
	}
	return (size_final);
}
