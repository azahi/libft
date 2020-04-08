/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 09:18:58 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 09:21:21 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

#include <ft_string.h>

/*
** Placeholder function.
*/

void	*ft_memmem(const void *a, size_t b, const void *c, size_t d)
{
	return (memmem(a, b, c, d));
}
