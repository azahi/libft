/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uputnn.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 14:05:24 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 21:34:20 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <uio.h>

void	uputnn(int n)
{
	ufputnn(STDOUT_FILENO, n);
}
