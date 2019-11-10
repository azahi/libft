/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 02:48:33 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 16:48:41 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>
#include <ft_stdlib.h>

long	ft_atol(const char *str)
{
	long	n;
	int		neg;

	n = 0;
	neg = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		neg = 1;
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
		n = 10 * n - (*str++ - '0');
	return (neg ? n : -n);
}
