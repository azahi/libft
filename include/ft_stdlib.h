/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:03 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 13:08:07 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stdlib.h>

# include <inttypes.h>

int			ft_abs(int j);
long		ft_labs(long j);
long long	ft_llabs(long long j);

div_t		ft_div(int num, int denom);
ldiv_t		ft_ldiv(long num, long denom);
lldiv_t		ft_lldiv(long num, long denom);

int			ft_l64a_r(long value, char *buffer, int buflen);
char		*ft_l64a(long value);
long		ft_a64l(const char *str);

int			ft_atoi(const char *str);
long		ft_atol(const char *str);
long long	ft_atoll(const char *str);
long		ft_strtol(const char *nptr, const char **endptr, int base);
long long	ft_strtoll(const char *nptr, const char **endptr, int base);

void		*ft_calloc(size_t nmemb, size_t size);

#endif
