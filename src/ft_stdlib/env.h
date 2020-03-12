/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 12:08:48 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/13 01:04:25 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_H
# define ENV_H

# define EXTERN_CHAR_ENVIRON extern char **environ

EXTERN_CHAR_ENVIRON;

int		__putenv(char *a, size_t b, char *c);
void	__env_rm_add(char *a, char *b);

#endif
