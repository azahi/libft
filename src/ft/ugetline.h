/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ugetline.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <jdeathlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:34:16 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/09 14:49:12 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UGETLINE_H
# define UGETLINE_H

# include <stddef.h>

typedef struct	s_list {
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

#endif
