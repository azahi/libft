/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 03:23:19 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/13 20:01:12 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

size_t	ft_strspn(const char *str, const char *accept)
{
	char		cs;
	char		ca;
	const char	*ts;
	const char	*ta;

	ts = str;
	ta = accept;
	cs = *ts++;
	while ((ca = *ta++) != '\0')
	{
		if (ca == cs)
		{
			ta = accept;
			cs = *ts++;
		}
	}
	return (--ts - str);
}
