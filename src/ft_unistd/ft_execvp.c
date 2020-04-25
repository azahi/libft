/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execvp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 01:22:38 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/15 18:57:01 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

#include <ft_unistd.h>

/*
** Placeholder function.
*/

int	ft_execvp(const char *file, char *const argv[])
{
	return (execvp(file, argv));
}
