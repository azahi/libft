/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 11:39:12 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 12:40:56 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdlib.h>

div_t	ft_div(int num, int denom)
{
	div_t	r;

	r.quot = num / denom;
	r.rem = num % denom;
	if (num >= 0 && r.rem < 0)
	{
		r.quot++;
		r.rem -= denom;
	}
	return (r);
}
