/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 13:44:04 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 13:45:52 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*ft_strtok(char *str, const char *sep)
{
	static char	*ts;

	if (!str && !(str = ts))
		return (NULL);
	str += ft_strspn(str, sep);
	if (!*str)
		return (ts = 0);
	ts = str + ft_strcspn(str, sep);
	if (*ts)
		*ts++ = 0;
	else
		ts = 0;
	return (str);
}
