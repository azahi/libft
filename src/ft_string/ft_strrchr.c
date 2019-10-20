/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:07:13 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 20:37:36 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *str, int ch)
{
	char	*ts;

	ts = NULL;
	while (1)
	{
		if (*str == ch)
			ts = (char *)str;
		if (*str == '\0')
			return (ts);
		str++;
	}
}
