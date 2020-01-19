/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rerealloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 01:26:56 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/01/20 02:01:34 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdlib.h>
#include <ft_string.h>

void	*rerealloc(void *p, size_t n, size_t o)
{
	void	*new;

	if (!p)
		return (malloc(n));
	if (!(new = malloc(n)))
	{
		free(p);
		return (NULL);
	}
	ft_memmove(new, p, o < n ? o : n);
	free(p);
	return (new);
}
