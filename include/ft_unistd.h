/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unistd.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 18:50:08 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/07 13:27:34 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UNISTD_H
# define FT_UNISTD_H

# include <unistd.h>

int		ft_getopt(int a, char *const *b, const char *c);

char	*g_optarg;
int		g_opterr;
int		g_optind;
int		g_optopt;
int		g_optreset;

int	ft_execv(const char *a, char *const b[]);
int	ft_execve(const char *a, char *const b[], char *const c[]);
int	ft_execvp(const char *a, char *const b[]);

#endif
