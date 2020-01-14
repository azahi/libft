/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:01 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/01/14 19:47:39 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include <stdarg.h>
# include <stdio.h>

int	ft_asprintf(char **strp, const char *fmt, ...);
int	ft_dprintf(int fd, const char *fmt, ...);
int	ft_fprintf(FILE *f, const char *fmt, ...);
int	ft_fputc(int ch, FILE *f);
int	ft_fputs(const char *s, FILE *f);
int	ft_printf(const char *fmt, ...);
int	ft_putc(int ch);
int	ft_puts(const char *s);
int	ft_scanf(const char *fmt, ...);
int	ft_snprintf(char *s, size_t n, const char *fmt, ...);
int	ft_sprintf(char *s, const char *fmt, ...);
int	ft_sscanf(const char *s, const char *fmt, ...);
int	ft_vasprintf(char **strp, const char *fmt, va_list ap);
int	ft_vprintf(const char *fmt, va_list ap);
int	ft_vscanf(const char *fmt, va_list ap);
int	ft_vsprintf(char *s, const char *fmt, va_list ap);

#endif
