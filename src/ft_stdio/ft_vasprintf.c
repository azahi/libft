/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vasprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 23:30:53 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/12/28 23:54:43 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdio.h>
#include <ft_stdlib.h>

int	ft_vasprintf(char **strp, const char *fmt, va_list ap)
{
	int		len;
	va_list	ap_copy;

	va_copy(ap_copy, ap);
	len = vsnprintf(NULL, 0, fmt, ap_copy);
	va_end(ap_copy);
	if (len < 0)
		return (-1);
	*strp = malloc(len + 1);
	if (!*strp)
		return (-1);
	return (vsprintf(*strp, fmt, ap));
}
