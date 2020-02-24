/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ufputsn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:42:18 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/02/24 19:36:26 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>
#include <ft_unistd.h>

int	ufputsn(const int fd, const char *s)
{
	ssize_t	size;

	size = ft_strlen(s);
	return ((write(fd, s, size) + (write(fd, "\n", 1)) == size + 1) - 1);
}
