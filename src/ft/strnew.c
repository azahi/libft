/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 14:26:39 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/01/19 14:37:14 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdlib.h>

char	*strnew(size_t size)
{
	char	*str;

	if (!(size + 1) || !(str = ft_calloc(size + 1, sizeof (*str))))
		return (NULL);
	return (str);
}
