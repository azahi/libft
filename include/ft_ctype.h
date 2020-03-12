/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:00 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/13 01:08:19 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

# include <ctype.h>

int	ft_isalnum(int a);
int	ft_isalpha(int a);
int	ft_isascii(int a);
int	ft_isblank(int a);
int	ft_iscntrl(int a);
int	ft_isdigit(int a);
int	ft_isgraph(int a);
int	ft_islower(int a);
int	ft_isprint(int a);
int	ft_ispunct(int a);
int	ft_isspace(int a);
int	ft_isupper(int a);
int	ft_isxdigit(int a);
int	ft_toascii(int a);
int	ft_tolower(int a);
int	ft_toupper(int a);

#endif
