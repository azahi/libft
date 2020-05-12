/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ugetl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 20:11:29 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/05/12 16:37:51 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

#include <ft_stdlib.h>
#include <ft_string.h>
#include <ft_unistd.h>

#define UGETL_BUFFER 1024

static int	buildstr(char **restrict lineptr, const char buf[], size_t size)
{
	char	*tmp;

	if (!*lineptr)
	{
		if (!(*lineptr = ft_strdup(buf)))
			return (-1);
	}
	else
	{
		if (!(tmp = ft_malloc(sizeof(*tmp) * (ft_strlen(*lineptr) + size))))
			return (-1);
		ft_strcat(tmp, *lineptr);
		ft_free(*lineptr);
		ft_strcat(tmp, buf);
		*lineptr = tmp;
		return (0);
	}
	return (0);
}

ssize_t		ugetl(char **restrict lineptr)
{
	char	*tmp;
	char	buf[UGETL_BUFFER + 1];
	int		flag;
	ssize_t	size;
	ssize_t	size_final;

	flag = 0;
	size_final = 0;
	while ((size = read(STDIN_FILENO, buf, UGETL_BUFFER + 1)) > 0)
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
