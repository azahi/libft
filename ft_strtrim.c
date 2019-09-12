/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:18:03 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/09/07 19:11:33 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
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
		return (ft_strcpy(ft_strnew(1), ""));
	j = ft_strlen(s) - 1;
	while (ft_isspace(s[j]))
		j--;
	if (!(str = ft_strnew(j - i + 1)))
		return (NULL);
	k = 0;
	while (k < j - i + 1)
	{
		str[k] = s[i + k];
		k++;
	}
	return (str);
}
