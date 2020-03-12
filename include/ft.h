/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 13:06:45 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/11 21:22:24 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <stddef.h>

#define FT_STDIN 0
#define FT_STDOUT 1
#define FT_STDERR 2

char	*itoa(int a);
char	*strjoin(char const *a, char const *b);
char	*strnew(size_t a);
int		ufputc(const int a, int b);
int		ufputs(const int a, const char *b);
int		ufputsn(const int a, const char *b);
int		ugetline(const int a, char **b);
int		uputc(int a);
int		uputs(const char *a);
int		uputsn(const char *a);
void	ufputn(const int a, int b);
void	uputn(int a);

#endif
