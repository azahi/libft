/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unistd.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 18:50:08 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/05/14 14:04:58 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UNISTD_H
# define FT_UNISTD_H

# include <unistd.h>

int			ft_getopt(int a, char *const *b, const char *c);

extern char	*g_optarg;
extern int	g_opterr;
extern int	g_optind;
extern int	g_optopt;
extern int	g_optreset;

int			ft_execv(const char *a, char *const b[]);
int			ft_execve(const char *a, char *const b[], char *const c[]);
int			ft_execvp(const char *a, char *const b[]);

#endif
