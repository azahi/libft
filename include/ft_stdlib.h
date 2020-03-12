/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:03 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/13 01:08:58 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stdlib.h>

char		*ft_getenv(const char *a);
div_t		ft_div(int a, int b);
int			ft_abs(int a);
int			ft_atoi(const char *a);
int			ft_putenv(char *a);
int			ft_setenv(const char *a, const char *b, int c);
int			ft_unsetenv(const char *a);
ldiv_t		ft_ldiv(long a, long b);
lldiv_t		ft_lldiv(long a, long b);
long		ft_a64l(const char *a);
long		ft_atol(const char *a);
long		ft_labs(long a);
long long	ft_atoll(const char *a);
long long	ft_llabs(long long a);
void		*ft_calloc(size_t a, size_t b);

#endif
