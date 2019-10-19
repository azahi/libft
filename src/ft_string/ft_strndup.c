/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:09:04 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 23:45:30 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdlib.h>
#include <ft_string.h>

char	*ft_strndup(const char *str, size_t maxsize)
{
	char	*copy;
	size_t	size;

	size = ft_strnlen(str, maxsize);
	if (!(copy = malloc(size + 1)))
		return (NULL);
	ft_memcpy(copy, str, size);
	copy[size] = '\0';
	return (copy);
}
