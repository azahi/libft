/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 14:16:02 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/01/19 14:33:42 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdlib.h>

static size_t	intlen(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	nn;

	len = intlen(n);
	nn = n;
	if (n < 0)
	{
		nn = -n;
		len++;
	}
	if (!(str = ft_calloc(len, sizeof (*str))))
		return (NULL);
	str[--len] = nn % 10 + '0';
	while (nn /= 10)
		str[--len] = nn % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
