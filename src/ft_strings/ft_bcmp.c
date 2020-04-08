/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bcmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 09:11:47 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 20:08:57 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _BSD_SOURCE
#define _DEFAULT_SOURCE

#include <ft_string.h>

void	ft_bcmp(const void *s1, void *s2, size_t n)
{
	ft_memmove(s2, s1, n);
}
