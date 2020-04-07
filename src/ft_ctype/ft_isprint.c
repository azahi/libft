/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:33:57 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/07 12:51:42 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>

int	ft_isprint(int c)
{
	return ((unsigned)c - 0x20 < 0x5f);
}
