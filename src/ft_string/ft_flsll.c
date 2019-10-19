/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flsll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:29:24 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 02:34:58 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_flsll(long long mask)
{
	int bit;

	if (!mask)
		return (0);
	bit = 1;
	while (mask != 1)
	{
		mask >>= 1;
		bit++;
	}
	return (bit);
}
