/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ufputc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:42:18 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 21:33:38 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <uio.h>

int	ufputc(t_fd fd, int ch)
{
	return (write(fd, &ch, 1));
}
