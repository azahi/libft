/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 23:25:26 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 13:40:20 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stddef.h>

char	*ft_strpbrk(const char *str, const char *charset)
{
	int	sch;
	int	cch;

	while ((sch = *str++))
	{
		while ((cch = *charset++) != '\0')
			if (cch == sch)
				return ((char *)(str - 1));
	}
	return (NULL);
}
*/
// TODO Test

#include <ft_string.h>

char	*ft_strpbrk(const char *str, const char *charset)
{
	str += ft_strcspn(str, charset);
	return (*str ? (char *)str : 0);
}
