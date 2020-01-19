/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ufputsn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:42:18 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/01/19 14:12:29 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>
#include <unistd.h>

int	ufputsn(const char *s, int fd)
{
	ssize_t	size;

	size = ft_strlen(s);
	return ((write(fd, s, size) + (write(fd, "\n", 1)) == size + 1) - 1);
}
