/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:58:23 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 22:04:40 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	while (size--)
	{
		if (*str1 != *str2++)
			return (*(unsigned char *)str1 - *(unsigned char *)(str2 - 1));
		if (*str1++ == '\0')
			break ;
	}
	return (0);
}
