/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chown.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:12:16 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 16:50:14 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_unistd.h>
#include <syscall.h>

int	ft_chown(const char *path, uid_t uid, gid_t gid)
{
	return (syscall(SYS_chown, path, uid, gid));
}
