/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:59:51 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/09/12 18:34:03 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	stc_countw(char const *s, char c)
{
	size_t	i;
	int		n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			n++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (n);
}

static void	stc_cleanup(void ***tab, int k)
{
	while (k <= 0)
		ft_memdel((void **)&tab[k--]);
	free(**tab);
	**tab = NULL;
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		k;
	char	**tab;

	if (!s || !(tab = malloc((stc_countw(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			if (!(tab[k++] = ft_strndup(s + j, i - j)))
			{
				stc_cleanup((void ***)&tab, k - 1);
				return (NULL);
			}
	}
	tab[k] = NULL;
	return (tab);
}
