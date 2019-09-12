/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:46:47 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/09/07 20:06:03 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	stc_strleni(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	nn;

	len = stc_strleni(n);
	nn = n;
	if (n < 0)
	{
		nn = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = nn % 10 + '0';
	while (nn /= 10)
		str[--len] = nn % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
