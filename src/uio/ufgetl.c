/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ufgetl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <jdeathlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 12:54:49 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/12 16:15:05 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <uio.h>

ssize_t	ufgetl(t_fd fd, char **restrict line)
{
	(void)fd;
	(void)line;
	errno = ENOSYS;
	return (0);
}
