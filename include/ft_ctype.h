/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:00 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 12:32:07 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

# include <ctype.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isblank(int c);
int	ft_iscntrl(int c);
int	ft_isdigit(int c);
int	ft_isgraph(int c);
int	ft_islower(int c);
int	ft_isprint(int c);
int	ft_ispunct(int c);
int	ft_isspace(int c);
int	ft_isupper(int c);
int	ft_isxdigit(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
