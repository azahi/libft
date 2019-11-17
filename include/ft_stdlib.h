/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:03 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/17 21:18:35 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stdlib.h>

div_t		ft_div(int num, int denom);
int			ft_abs(int num);
int			ft_atoi(const char *str);
ldiv_t		ft_ldiv(long num, long denom);
lldiv_t		ft_lldiv(long num, long denom);
long		ft_a64l(const char *str);
long		ft_atol(const char *str);
long		ft_labs(long num);
long long	ft_atoll(const char *str);
long long	ft_llabs(long long num);

#endif
