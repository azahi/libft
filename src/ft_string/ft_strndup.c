/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:09:04 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 20:20:37 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdlib.h>
#include <ft_string.h>

char	*ft_strndup(const char *str, size_t size)
{
	char	*copy;
	size_t	ssize;

	ssize = ft_strnlen(str, size);
	if (!(copy = malloc(ssize + 1)))
		return (NULL);
	ft_memcpy(copy, str, ssize);
	copy[ssize] = '\0';
	return (copy);
}
