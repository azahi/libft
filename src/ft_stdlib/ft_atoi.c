/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:39:16 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 16:48:36 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>
#include <ft_stdlib.h>

int	ft_atoi(const char *str)
{
	int	n;
	int	neg;

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
