/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsearch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:00:05 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 15:02:34 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdlib.h>

void *ft_bsearch(const void *key, const void *base, size_t nmemb, size_t size,
		int (*cmp)(const void *, const void *))
{
	void	*try;
	int		sign;

	while (nmemb > 0)
	{
		try = (char *)base + size * (nmemb / 2);
		sign = cmp(key, try);
		if (sign < 0)
		{
			nmemb /= 2;
		}
		else if (sign > 0)
		{
			base = (char *)try + size;
			nmemb -= nmemb/2+1;
		}
		else
		{
			return (try);
		}
	}
	return (NULL);
}
