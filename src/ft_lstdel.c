/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:45:47 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/09/12 18:37:45 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !*alst || !del)
		return ;
	if ((*alst)->next)
		ft_lstdel(&(*alst)->next, del);
	ft_lstdelone(alst, del);
}
