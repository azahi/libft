/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 13:06:45 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/02/22 20:53:39 by jdeathlo         ###   ########.fr       */
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
char	*strtrim(char const *);
int		ufputc(int, int);
int		ufputs(const char *, int);
int		ufputsn(const char *, int);
int		uputc(int);
int		uputs(const char *);
int		uputsn(const char *);
void	*rerealloc(void *, size_t, size_t);
void	ufputn(int, int);
void	uputn(int);

#endif
