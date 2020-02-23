/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 13:06:45 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/02/23 12:57:49 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <stddef.h>

#define FT_STDIN 0
#define FT_STDOUT 1
#define FT_STDERR 2

char	**strsplit(char const *, char);
char	*itoa(int);
char	*strjoin(char const *, char const *);
char	*strnew(size_t);
int		ufputc(const int, int);
int		ufputs(const int, const char *);
int		ufputsn(const int, const char *);
int		ugetline(const int, char **);
int		uputc(int);
int		uputs(const char *);
int		uputsn(const char *);
void	ufputn(const int, int);
void	uputn(int);

#endif
