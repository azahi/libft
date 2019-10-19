/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:37:03 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 22:04:31 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *str1, const char *str2)
{
	while (1)
	{
		if (*str1 != *str2++)
			return (*(unsigned char *)str1 - *(unsigned char *)(str2 - 1));
		if (*str1++ == '\0')
			break ;
	}
	return (0);
}
