/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:42:18 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/17 20:45:49 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdio.h>
#include <ft_string.h>

int	ft_puts(const char *str)
{
	size_t size;

	size = ft_strlen(str);
	return ((fwrite(str, 1, size, stdout) == size) - 1);
}
