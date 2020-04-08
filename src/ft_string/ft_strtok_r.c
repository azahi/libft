/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 13:44:04 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 21:18:59 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*ft_strtok_r(char *restrict str, const char *restrict sep,
			char **restrict p)
{
	if (!str && !(str = *p))
		return (NULL);
	str += ft_strspn(str, sep);
	if (!*str)
		return (*p = NULL);
	*p = str + ft_strcspn(str, sep);
	if (**p)
		*(*p)++ = '\0';
	else
		*p = NULL;
	return (str);
}
