/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 23:25:26 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 00:33:16 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*ft_strpbrk(const char *str, const char *charset)
{
	int	c;
	int	sc;

	while ((c = *str++))
	{
		while ((sc = *charset++) != '\0')
			if (sc == c)
				return ((char *)(str - 1));
	}
	return (NULL);
}
