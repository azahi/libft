/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:01 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/11 21:28:27 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include <stdarg.h>
# include <stdio.h>

int	ft_asprintf(char **a, const char *b, ...);
int	ft_dprintf(int a, const char *b, ...);
int	ft_fprintf(FILE *a, const char *b, ...);
int	ft_fputc(int a, FILE *b);
int	ft_fputs(const char *a, FILE *b);
int	ft_printf(const char *a, ...);
int	ft_putc(int a);
int	ft_puts(const char *a);
int	ft_scanf(const char *a, ...);
int	ft_snprintf(char *a, size_t b, const char *c, ...);
int	ft_sprintf(char *a, const char *b, ...);
int	ft_sscanf(const char *a, const char *b, ...);
int	ft_vasprintf(char **a, const char *b, va_list c);
int	ft_vprintf(const char *a, va_list b);
int	ft_vscanf(const char *a, va_list b);
int	ft_vsprintf(char *a, const char *b, va_list c);

#endif
