/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bcopy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 09:13:50 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 20:09:06 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _BSD_SOURCE
#define _DEFAULT_SOURCE

#include <ft_string.h>

int	ft_bcmp(const void *s1, const void *s2, size_t n)
{
	return (ft_memcmp(s1, s2, n));
}
