/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 23:25:26 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/11/13 20:41:59 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>

char	*ft_strpbrk(const char *str, const char *charset)
{
	str += ft_strcspn(str, charset);
	return (*str ? (char *)str : 0);
}
