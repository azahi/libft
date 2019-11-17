/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:01 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/17 20:58:51 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include <stdio.h>

int		ft_fprintf(FILE *file, const char *fmt, ...);
int		ft_fputc(int ch, FILE *file);
int		ft_fputs(const char *str, FILE *file);
int		ft_printf(const char *fmt, ...);
int		ft_putc(int ch);
int		ft_puts(const char *str);

#endif
