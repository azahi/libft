/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 01:40:25 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 21:15:31 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef __linux__

# define _GNU_SOURCE

# include <ft_unistd.h>
# include <syscall.h>

int	ft_execve(const char *file, char *const argv[], char *const envp[])
{
	return (syscall(SYS_execve, file, argv, envp));
}

#else

# include <ft_unistd.h>

int	ft_execve(const char *file, char *const argv[], char *const envp[])
{
	return (execve(file, argv, envp));
}

#endif
