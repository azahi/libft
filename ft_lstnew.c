/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:57:08 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/09/16 11:54:25 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;

	if (!(node = malloc(sizeof(*node))))
		return (NULL);
	if (!(node->content = malloc(content_size)))
	{
		ft_memdel((void **)&node);
		return (NULL);
	}
	node->next = NULL;
	if (!content)
	{
		node->content = NULL;
		node->content_size = 0;
		return (node);
	}
	ft_memcpy(node->content, content, content_size);
	node->content_size = content_size;
	return (node);
}
