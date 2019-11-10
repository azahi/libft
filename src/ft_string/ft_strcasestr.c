/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 03:16:10 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 03:19:40 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*ft_strcasestr(const char *str, const char *find)
{
	while (*str)
	{
		if (!ft_strncasecmp(str, find, ft_strlen(find)))
			return ((char *)str);
		str++;
	}
	return (NULL);
}
