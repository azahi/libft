/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:09:15 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 20:49:06 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdlib.h>
#include <ft_string.h>

char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*str3;

	if (!str1 && !str2)
		return (NULL);
	if (!str1)
		return (ft_strdup(str2));
	if (!str2)
		return (ft_strdup(str1));
	if (!(str3 = malloc(sizeof(*str3) *
			(ft_strlen(str1) + ft_strlen(str2) + 1))))
		return (NULL);
	ft_strcpy(str3, (char *)str1);
	ft_strcat(str3, (char *)str2);
	return (str3);
}
