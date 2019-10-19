/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lldiv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 11:54:49 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 13:02:20 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdlib.h>

lldiv_t	ft_lldiv(long num, long denom)
{
	lldiv_t	r;

	r.quot = num / denom;
	r.rem = num % denom;
	if (num >= 0 && r.rem < 0)
	{
		r.quot++;
		r.rem -= denom;
	}
	return (r);
}
