/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:09:04 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 15:12:52 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>
#include <ft_stdlib.h>

char	*ft_strndup(const char *str, size_t maxlen)
{
	char	*copy;
	size_t	len;

	len = ft_strnlen(str, maxlen);
	if (!(copy = malloc(len + 1)))
		return (NULL);
	ft_memcpy(copy, str, len);
	copy[len] = '\0';
	return (copy);
}
