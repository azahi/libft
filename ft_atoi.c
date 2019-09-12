/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:39:16 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/09/07 18:52:50 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long	res;
	int			neg;

	while (ft_isspace(*str))
		str++;
	neg = 0;
	if (*str == '-')
	{
		neg = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = (10 * res) + (*str - '0');
		str++;
	}
	if (res < 0)
		return ((neg == 1) ? 0 : -1);
	if (neg)
		return ((int)-res);
	return ((int)res);
}
