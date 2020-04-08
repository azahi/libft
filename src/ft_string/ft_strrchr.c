/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:07:13 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 20:11:15 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

#include <ft_string.h>

char	*ft_strrchr(const char *str, int ch)
{
	return (ft_memrchr(str, ch, ft_strlen(str) + 1));
}
