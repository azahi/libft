/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unistd.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:52:04 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 16:54:58 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UNISTD_H
# define FT_UNISTD_H

# define _GNU_SOURCE

#include <sys/types.h>
#include <unistd.h>

int		ft_chdir(const char *path);
int		ft_chown(const char *path, uid_t uid, gid_t gid);
int		ft_link(const char *existing, const char *new);
int		ft_pipe(int fd[2]);
int		ft_rmdir(const char *path);
int		ft_symlink(const char *existing, const char *new);
int		ft_unlink(const char *path);
off_t	ft_lseek(int fd, off_t offset, int whence);
ssize_t	ft_readlink(const char *path, char *buf, size_t bufsize);

#endif
