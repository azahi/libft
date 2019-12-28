/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 23:30:53 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/12/28 23:53:04 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdio.h>

int	ft_asprintf(char **strp, const char *fmt, ...)
{
	int		len;
	va_list	ap;

	va_start(ap, fmt);
	len = ft_vasprintf(strp, fmt, ap);
	va_end(ap);
	return (len);
}
