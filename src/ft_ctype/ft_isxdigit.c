/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:20:46 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/14 00:47:19 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>

int	ft_isxdigit(int c)
{
	return (ft_isdigit(c) || ((unsigned)c | 32) - 'a' < 6);
}

int	ft_isxdigit_l(int c, locale_t l)
{
	(void)l;
	return (ft_isxdigit(c));
}
