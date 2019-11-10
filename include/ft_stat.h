/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:45:22 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 16:46:39 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STAT_H
# define FT_STAT_H

# include <sys/stat.h>
# include <sys/types.h>

int	ft_chmod(const char *path, mode_t mode);
int	ft_mkdir(const char *path, mode_t mode);
int	ft_mknod(const char *path, mode_t mode, dev_t dev);

#endif
