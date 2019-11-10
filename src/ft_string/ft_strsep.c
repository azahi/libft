/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 13:40:46 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 13:42:40 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char *ft_strsep(char **str, const char *sep)
{
	char *ts;
	char *end;

	ts = *str;
	if (!ts)
		return NULL;
	end = ts + ft_strcspn(ts, sep);
	if (*end)
		*end++ = '\0';
	else
		end = '\0';
	*str = end;
	return (ts);
}
