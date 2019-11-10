/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_symlink.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:36:17 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/10 16:50:51 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_unistd.h>
#include <syscall.h>

int	ft_symlink(const char *existing, const char *new)
{
	return (syscall(SYS_symlink, existing, new));
}
