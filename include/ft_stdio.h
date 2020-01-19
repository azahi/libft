/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:01 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/01/19 13:50:35 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include <stdarg.h>
# include <stdio.h>

int	ft_asprintf(char **, const char *, ...);
int	ft_dprintf(int, const char *, ...);
int	ft_fprintf(FILE *, const char *, ...);
int	ft_fputc(int, FILE *);
int	ft_fputs(const char *, FILE *);
int	ft_printf(const char *, ...);
int	ft_putc(int);
int	ft_puts(const char *);
int	ft_scanf(const char *, ...);
int	ft_snprintf(char *, size_t, const char *, ...);
int	ft_sprintf(char *, const char *, ...);
int	ft_sscanf(const char *, const char *, ...);
int	ft_vasprintf(char **, const char *, va_list);
int	ft_vprintf(const char *, va_list);
int	ft_vscanf(const char *, va_list);
int	ft_vsprintf(char *, const char *, va_list);

#endif
