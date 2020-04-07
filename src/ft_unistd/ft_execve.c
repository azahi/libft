/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 01:40:25 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/22 15:49:10 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_unistd.h>

#ifdef __linux__
# include <sys/syscall.h>

int	ft_execve(const char *file, char *const argv[], char *const envp[])
{
	return (syscall(SYS_execve, file, argv, envp));
}

#else

int	ft_execve(const char *file, char *const argv[], char *const envp[])
{
	return (execve(file, argv, envp));
}

#endif
