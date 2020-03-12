/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dirname.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 23:57:49 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/13 00:01:48 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*ft_dirname(char *s)
{
	size_t	i;

	if (!s || !*s)
		return (".");
	i = ft_strlen(s) - 1;
	while (s[i] == '/')
	{
		if (!i)
			return ("/");
		i--;
	}
	while (s[i] != '/')
	{
		if (!i)
			return (".");
		i--;
	}
	while (s[i] == '/')
	{
		if (!i)
			return ("/");
		i--;
	}
	s[i + 1] = '\0';
	return (s);
}
