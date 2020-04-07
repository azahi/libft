/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ugetl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 20:11:29 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/07 12:56:33 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <ft_stdlib.h>
#include <ft_string.h>
#include <ft_unistd.h>
#include <uio.h>

#include "__ufgetl.h"

ssize_t	ugetl(char **restrict lineptr)
{
	char	*tmp;
	char	buf[UGETL_BUFFER + 1];
	ssize_t	size;
	ssize_t	size_final;
	int		flag;

	flag = 0;
	size_final = 0;
	while ((size = read(STDIN_FILENO, buf, UGETL_BUFFER + 1)) > 0)
	{
		if ((tmp = strchr(buf, '\n')))
		{
			size = tmp - buf;
			flag = 1;
		}
		buf[size] = '\0';
		size_final += size;
		if (!*lineptr)
		{
			*lineptr = strdup(buf);
			if (!*lineptr)
				return (-1);
		}
		else
		{
			tmp = calloc(sizeof(*tmp), strlen(*lineptr) + size);
			if (!tmp)
				return (-1);
			strcat(tmp, *lineptr);
			strcat(tmp, buf);
			free(*lineptr);
			*lineptr = tmp;
		}
		if (flag)
			break ;
	}
	return (size_final);
}
