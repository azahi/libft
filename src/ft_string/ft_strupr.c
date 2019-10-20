/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 19:08:58 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 20:18:47 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ctype.h>

char	*ft_strupr(const char *str)
{
	char	*ts;

	ts = (char *)str;
	while (*ts)
	{
		*ts = ft_toupper(*ts);
		ts++;
	}
	return ((char *)str);
}
