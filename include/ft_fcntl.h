/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fcntl.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 14:27:52 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 14:28:38 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FCNTL_H
# define FT_FCNTL_H

# include <fcntl.h>

int	ft_creat(const char *filename, mode_t mode);

#endif
