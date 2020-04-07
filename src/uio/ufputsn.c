/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ufputsn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:42:18 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/27 23:34:54 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>
#include <ft_unistd.h>
#include <uio.h>

int	ufputsn(t_fd fd, const char *restrict s)
{
	ssize_t	size;

	size = ft_strlen(s);
	return ((write(fd, s, size) + ufputc(fd, '\n') == size + 1) - 1);
}
