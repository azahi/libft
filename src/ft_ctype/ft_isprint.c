/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:33:57 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/14 00:49:33 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>

int	ft_isprint(int c)
{
	return ((unsigned)c - 0x20 < 0x5f);
}

int	ft_isprint_l(int c, locale_t l)
{
	(void)l;
	return (ft_isprint(c));
}
