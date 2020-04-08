/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 03:16:10 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 09:23:25 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

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
