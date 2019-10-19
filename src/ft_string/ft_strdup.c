/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:44:22 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 23:43:53 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdlib.h>
#include <ft_string.h>

char	*ft_strdup(const char *str)
{
	char	*copy;
	size_t	size;

	size = ft_strlen(str) + 1;
	if (!(copy = malloc(size)))
		return (NULL);
	ft_memcpy(copy, str, size);
	return (copy);
}
