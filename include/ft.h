/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 13:06:45 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/01/19 14:49:24 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <stddef.h>

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
void	ufputn(int, int);
void	uputn(int);

#endif
