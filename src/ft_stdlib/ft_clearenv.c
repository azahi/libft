/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 18:15:09 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/05/05 18:50:29 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_stdlib.h>
#include <ft_unistd.h>

#include "internal_env.h"

int	ft_clearenv(void)
{
	char		**e;
	extern char	**environ;

	e = environ;
	environ = NULL;
	if (e)
		while (*e)
			internal_env_rm_add(*e++, NULL);
	return (0);
}
