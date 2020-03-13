/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:36:10 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/14 00:46:32 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>

int	ft_isupper(int c)
{
	return ((unsigned)c - 'A' < 26);
}

int	ft_isupper_l(int c, locale_t l)
{
	(void)l;
	return (ft_isupper(c));
}
