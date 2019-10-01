/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:43:05 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/09/04 17:08:41 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, char *s2)
{
	char	*s3;

	s3 = s1;
	while (*s1)
		++s1;
	while ((*s1++ = *s2++))
		;
	return (s3);
}