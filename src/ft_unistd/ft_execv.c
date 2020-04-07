/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 01:37:00 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/30 17:59:13 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_unistd.h>

#include "../__environ.h"

int	ft_execv(const char *file, char *const argv[])
{
	return (ft_execve(file, argv, environ));
}
