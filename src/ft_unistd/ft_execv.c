/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 01:37:00 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/12 15:07:04 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_unistd.h>

int	ft_execv(const char *file, char *const argv[])
{
	extern char **environ;

	return (ft_execve(file, argv, environ));
}
