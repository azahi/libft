/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l64a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 11:53:18 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 12:50:58 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdlib.h>
#include <stdint.h>

char	*ft_l64a(long value)
{
	static char buf[7];

	ft_l64a_r(value, buf, sizeof(buf));
	return (buf);
}
