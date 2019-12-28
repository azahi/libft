/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:01 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/12/28 23:55:05 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include <stdarg.h>
# include <stdio.h>

int		ft_asprintf(char **strp, const char *fmt, ...);
int		ft_fprintf(FILE *file, const char *fmt, ...);
int		ft_fputc(int ch, FILE *file);
int		ft_fputs(const char *str, FILE *file);
int		ft_printf(const char *fmt, ...);
int		ft_putc(int ch);
int		ft_puts(const char *str);
int		ft_vasprintf(char **strp, const char *fmt, va_list ap);

#endif
