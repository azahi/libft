/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:00 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/01/19 13:51:13 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

# include <ctype.h>

int	ft_isalnum(int);
int	ft_isalpha(int);
int	ft_isascii(int);
int	ft_isblank(int);
int	ft_iscntrl(int);
int	ft_isdigit(int);
int	ft_isgraph(int);
int	ft_islower(int);
int	ft_isprint(int);
int	ft_ispunct(int);
int	ft_isspace(int);
int	ft_isupper(int);
int	ft_isxdigit(int);
int	ft_toascii(int);
int	ft_tolower(int);
int	ft_toupper(int);

#endif
