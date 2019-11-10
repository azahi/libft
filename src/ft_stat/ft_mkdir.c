/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mkdir.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 14:44:34 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 16:43:03 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_unistd.h>
#include <syscall.h>

int	ft_mkdir(const char *path, mode_t mode)
{
	return (syscall(SYS_mkdir, path, mode));
}
