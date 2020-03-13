/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:24:05 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/13 23:51:01 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>

int	ft_isdigit(int c)
{
	return ((unsigned)c - '0' < 10);
}

int	ft_isdigit_l(int c, locale_t l)
{
	(void)l;
	return (ft_isdigit(c));
}
