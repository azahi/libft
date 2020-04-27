/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ufgetc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 16:53:29 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/27 13:28:59 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma GCC diagnostic ignored "-Wunused-result"

#include <uio.h>

int	ufgetc(t_fd fd)
{
	int	ch;

	read(fd, &ch, 1);
	return (ch);
}
