/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:37:44 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/14 00:01:57 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>

int	ft_isspace(int c)
{
	return (c == ' ' || (unsigned)c - '\t' < 5);
}

int	ft_isspace_l(int c, locale_t l)
{
	(void)l;
	return (ft_isspace(c));
}
