/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:18:27 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 20:08:07 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#pragma GCC diagnostic ignored "-Wunused-result"
#pragma GCC diagnostic push

void	ft_putchar(int ch)
{
	write(1, &ch, 1);
}

#pragma GCC diagnostic pop
