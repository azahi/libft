/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 13:44:04 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 09:49:08 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*ft_strtok(char *restrict str, const char *restrict sep)
{
	static char	*p;

	if (!str && !(str = p))
		return (NULL);
	str += ft_strspn(str, sep);
	if (!*str)
		return (p = NULL);
	p = str + ft_strcspn(str, sep);
	if (*p)
		*p++ = '\0';
	else
		p = NULL;
	return (str);
}
