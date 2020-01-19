/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:03 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/01/19 14:40:33 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stdlib.h>

div_t		ft_div(int, int);
int			ft_abs(int);
int			ft_atoi(const char *);
ldiv_t		ft_ldiv(long, long);
lldiv_t		ft_lldiv(long, long);
long		ft_a64l(const char *);
long		ft_atol(const char *);
long		ft_labs(long);
long long	ft_atoll(const char *);
long long	ft_llabs(long long);
void		*ft_calloc(size_t, size_t);

#endif
