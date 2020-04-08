/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:44:22 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 20:26:43 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdlib.h>
#include <ft_string.h>

char	*ft_strdup(const char *str)
{
	char	*copy;
	size_t	ssize;

	ssize = ft_strlen(str) + 1;
	if (!(copy = malloc(sizeof(*copy) * ssize)))
		return (NULL);
	ft_memcpy(copy, str, ssize);
	return (copy);
}
