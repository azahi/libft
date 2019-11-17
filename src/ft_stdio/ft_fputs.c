/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fputs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 19:42:18 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/17 20:12:54 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdio.h>
#include <ft_string.h>

int	ft_fputs(const char *str, FILE *file)
{
	size_t size;

	size = ft_strlen(str);
	return ((fwrite(str, 1, size, file) == size) - 1);
}
