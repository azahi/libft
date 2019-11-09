/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bcmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 02:27:42 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 02:31:17 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

int	ft_bcmp(const void *s1, const void *s2, size_t size)
{
	return (ft_memcmp(s1, s2, size));
}
