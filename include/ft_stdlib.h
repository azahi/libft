/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:03 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/12 19:15:55 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stdlib.h>

div_t		ft_div(int a, int b);
ldiv_t		ft_ldiv(long a, long b);
lldiv_t		ft_lldiv(long a, long b);

int			ft_atoi(const char *a);
long		ft_atol(const char *a);
long long	ft_atoll(const char *a);

int			ft_abs(int a);
long		ft_labs(long a);
long long	ft_llabs(long long a);

void		*ft_calloc(size_t a, size_t b);
void		*ft_malloc(size_t a);
void		*ft_realloc(void *a, size_t b);
void		ft_free(void *a);

char		*ft_getenv(const char *a);

# if defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE) || \
	defined(_XOPEN_SOURCE) || defined(_GNU_SOURCE) || defined(_BSD_SOURCE)

int			ft_setenv(const char *a, const char *b, int c);
int			ft_unsetenv(const char *a);

# endif

# if defined(_XOPEN_SOURCE) || defined(_GNU_SOURCE) || defined(_BSD_SOURCE)

int			ft_putenv(char *a);

# endif

# endif
