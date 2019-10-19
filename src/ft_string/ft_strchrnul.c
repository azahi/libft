/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrnul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 23:33:25 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 13:13:24 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchrnul(const char *p, int ch)
{
	char c;

	c = ch;
	while (1)
	{
		if (*p == c || *p == '\0')
			return ((char *)p);
		p++;
	}
}
