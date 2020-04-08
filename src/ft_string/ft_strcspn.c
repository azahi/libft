/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 03:23:19 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 21:19:56 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

size_t	ft_strcspn(const char *str, const char *reject)
{
	char		cs;
	char		cr;
	const char	*ts;
	const char	*tr;

	ts = str;
	while (1)
	{
		cs = *ts++;
		tr = reject;
		if ((cr = *tr++) == cs)
			return (--ts - str);
		while (cr != '\0')
			if ((cr = *tr++) == cs)
				return (--ts - str);
	}
}
