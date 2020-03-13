/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 18:50:19 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/14 00:49:24 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>

int	ft_isgraph(int c)
{
	return ((unsigned)c - 0x21 < 0x5e);
}

int	ft_isgraph_l(int c, locale_t l)
{
	(void)l;
	return (ft_isgraph(c));
}
