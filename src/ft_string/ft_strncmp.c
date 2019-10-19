/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:58:23 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 01:50:39 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 == '\0')
			break ;
		if (*s1++ != *s2++)
			return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
	}
	return (0);
}
