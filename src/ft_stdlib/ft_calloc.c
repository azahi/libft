/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <jdeathlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:05:46 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 21:23:35 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <ft_stdlib.h>
#include <ft_string.h>

/*
** A memory allocator.
**
** https://pubs.opengroup.org/onlinepubs/9699919799/functions/calloc.html#
**
** NOTE:
** This implementation only mimics calloc() functionality to overwrite
** allocated memory with zeroes. This means that no memory alignment and
** mapping is done apart from what is included in malloc() from host libc.
*/

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
		return (NULL);
	return (ft_memset(ptr, 0, size));
}
