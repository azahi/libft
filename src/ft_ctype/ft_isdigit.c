/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:24:05 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 12:28:15 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}