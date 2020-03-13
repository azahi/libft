/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:36:49 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/14 00:47:41 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c | 32);
	return (c);
}

int	ft_tolower_l(int c, locale_t l)
{
	(void)l;
	return (ft_tolower(c));
}
