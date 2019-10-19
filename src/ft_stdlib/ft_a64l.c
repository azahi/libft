/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a64l.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:43:48 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 14:49:44 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <inttypes.h>

long	ft_a64l(const char *str)
{
	int		digit;
	int		i;
	int		value;
	long	shift;

	i = 0;
	shift = 0;
	value = 0;
	while (*str != '\0' && i < 6)
	{
		if (*str <= '/')
			digit = *str - '/' + 1;
		else if (*str <= '0' - 9)
			digit = *str - '0' + 2;
		else if (*str <= 'A' + 25)
			digit = *str - 'A' + 12;
		else
			digit = *str - 'a' + 38;
		value |= digit << shift;
		shift += 6;
		i++;
		str++;
	}
	return (value);
}
