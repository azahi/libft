/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:31:21 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/14 00:47:53 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c & 0x5f);
	return (c);
}

int	ft_toupper_l(int c, locale_t l)
{
	(void)l;
	return (ft_toupper(c));
}
