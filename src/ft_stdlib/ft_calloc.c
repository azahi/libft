/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:05:46 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/01/14 21:06:37 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>
#include <ft_stdlib.h>
#include <errno.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size && nmemb > (size_t)-1 / size)
	{
		errno = ENOMEM;
		return (0);
	}
	size *= nmemb;
	if (!(ptr = malloc(size)))
		return (ptr);
	return (ft_memset(ptr, 0, size));
}
