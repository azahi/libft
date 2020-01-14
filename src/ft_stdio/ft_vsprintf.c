/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 20:05:57 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/01/14 19:29:26 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdio.h>
#include <limits.h>

int	ft_vsprintf(char *s, const char *fmt, va_list ap)
{
	return (vsnprintf(s, INT_MAX, fmt, ap));
}
