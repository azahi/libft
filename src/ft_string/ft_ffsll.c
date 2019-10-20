/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ffsll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:27:30 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 20:47:31 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ffsll(long long mask)
{
	int	bit;

	if (!mask)
		return (0);
	bit = 1;
	while (!(mask & 1))
	{
		mask >>= 1;
		bit++;
	}
	return (bit);
}
