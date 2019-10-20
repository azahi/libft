/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlwr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 19:08:58 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 21:21:04 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>

char	*ft_strlwr(const char *str)
{
	char	*ts;

	ts = (char *)str;
	while (*ts)
	{
		*ts = ft_tolower(*ts);
		ts++;
	}
	return ((char *)str);
}
