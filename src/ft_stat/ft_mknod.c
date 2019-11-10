/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mknod.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 14:46:56 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 16:43:14 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_unistd.h>
#include <syscall.h>

int	ft_mknod(const char *path, mode_t mode, dev_t dev)
{
	return (syscall(SYS_mknod, path, mode, dev));
}
