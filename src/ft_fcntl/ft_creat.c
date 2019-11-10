/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 14:28:54 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 16:31:56 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_fcntl.h>

int	ft_creat(const char *filename, mode_t mode)
{
	return (open(filename, O_CREAT|O_WRONLY|O_TRUNC, mode));
}
