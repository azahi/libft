/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:07:13 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 01:17:12 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strrchr(const char *s, int c)
{
	char *save;

	save = NULL;
	while (1)
	{
		if (*s == c)
			save = (char *)s;
		if (*s == '\0')
			return (save);
		s++;
	}
}
