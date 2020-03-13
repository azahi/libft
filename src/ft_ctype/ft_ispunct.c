/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 18:50:21 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/14 00:48:10 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>

int	ft_ispunct(int c)
{
	return (ft_isgraph(c) && !ft_isalnum(c));
}

int	ft_ispunct_l(int c, locale_t l)
{
	(void)l;
	return (ft_ispunct(c));
}
