/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uio.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 13:06:45 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 10:19:14 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# ifndef NO_FTLIB_SPECIFIC

#  include <sys/types.h>
#  include <unistd.h>

typedef const int	t_fd;

int					ufgetc(t_fd a);
int					ufputc(t_fd a, int ch);
int					ufputcn(t_fd a, int ch);
int					ufputs(t_fd a, const char *restrict b);
int					ufputsn(t_fd a, const char *restrict b);
int					ugetc(void);
int					uputc(int a);
int					uputcn(int a);
int					uputs(const char *restrict b);
int					uputsn(const char *restrict b);
ssize_t				ufgetl(t_fd a, char **restrict b);
ssize_t				ugetl(char **restrict b);
void				ufputn(t_fd a, int b);
void				ufputnn(t_fd a, int b);
void				uputn(int a);
void				uputnn(int a);

# endif

#endif
