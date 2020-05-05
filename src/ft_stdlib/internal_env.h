/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   internal_env.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 12:08:48 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/05/05 18:52:24 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERNAL_ENV_H
# define INTERNAL_ENV_H

# include <stddef.h>

int		internal_einval(void);
int		internal_putenv(char *a, size_t b, char *c);
void	internal_env_rm_add(char *a, char *b);

#endif
