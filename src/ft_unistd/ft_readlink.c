/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readlink.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:33:00 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 16:50:40 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_unistd.h>
#include <syscall.h>

ssize_t	ft_readlink(const char *path, char *buf, size_t bufsize)
{
	return (syscall(SYS_readlink, path, buf, bufsize));
}
