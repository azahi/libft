/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __environ.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 12:08:48 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/30 17:58:53 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ENVIRON_H
# define __ENVIRON_H

/*
** Fuck norminette.
*/

# define NORM_ENVIRON extern char **environ

NORM_ENVIRON;

# undef NORM_ENVIRON

#endif
