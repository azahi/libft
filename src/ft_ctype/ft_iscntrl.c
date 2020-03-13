/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 18:50:15 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/13 23:51:29 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>

int	ft_iscntrl(int c)
{
	return ((unsigned)c < 0x20 || c == 0x7f);
}

int	ft_iscntrl_l(int c, locale_t l)
{
	(void)l;
	return (ft_iscntrl(c));
}
