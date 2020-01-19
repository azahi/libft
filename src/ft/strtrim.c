/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 14:28:06 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/01/19 14:34:52 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <ft_ctype.h>
#include <ft_string.h>

char	*strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (NULL);
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	if (!s[i])
		return (ft_strcpy(strnew(1), ""));
	j = ft_strlen(s) - 1;
	while (ft_isspace(s[j]))
		j--;
	if (!(str = strnew(j - i + 1)))
		return (NULL);
	k = 0;
	while (k < j - i + 1)
	{
		str[k] = s[i + k];
		k++;
	}
	return (str);
}
