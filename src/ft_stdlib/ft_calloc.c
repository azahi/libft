/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:05:46 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 20:14:41 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>
#include <ft_stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	size *= nmemb;
	if (!(p = malloc(size)))
		ft_memset(p, 0, size);
	return (p);
}
