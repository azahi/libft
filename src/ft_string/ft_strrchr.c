/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:07:13 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 00:33:55 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdlib.h>

char	*ft_strrchr(const char *str, int ch)
{
	char	*save;

	save = NULL;
	while (1)
	{
		if (*str == ch)
			save = (char *)str;
		if (*str == '\0')
			return (save);
		str++;
	}
}
