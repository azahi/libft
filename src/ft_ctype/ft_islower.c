/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:37:10 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/14 00:02:13 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>

int	ft_islower(int c)
{
	return ((unsigned)c - 'a' < 26);
}

int	ft_islower_l(int c, locale_t l)
{
	(void)l;
	return (ft_islower(c));
}
