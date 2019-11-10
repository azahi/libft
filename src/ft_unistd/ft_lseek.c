/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lseek.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:29:56 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 16:54:43 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_unistd.h>
#include <syscall.h>

off_t	ft_lseek(int fd, off_t offset, int whence)
{
	return (syscall(SYS_lseek, fd, offset, whence));
}
