/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:37:03 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 01:52:51 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (1)
	{
		if (*s1 == '\0')
			break ;
		if (*s1++ != *s2++)
			return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
	}
	return (0);
}
