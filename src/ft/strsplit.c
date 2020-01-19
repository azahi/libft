/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 14:29:36 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/01/19 14:47:47 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <ft_stdlib.h>

static int	count_words(const char *s, char c)
{
	int		flag;
	int		n;
	size_t	i;

	flag = 0;
	n = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			flag = 1;
		}
		while (s[i] && s[i] == c)
			i++;
		if (flag == 1)
			n++;
	}
	return (n);
}

static int	count_letters(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] == c)
		s++;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	copy_string(char const *s, char c, char **tab)
{
	char	*string;
	int		j;
	int		words;
	size_t	i;

	j = 0;
	words = count_words(s, c);
	while (j < words)
	{
		i = 0;
		if (!(string = strnew(count_letters(s, c))))
			return (j);
		while (s[0] == c && s[0])
			s++;
		while (!(s[0] == c) && s[0])
			string[i++] = *s++;
		string[i] = 0;
		tab[j++] = string;
	}
	return (-1);
}

static void	memory_cleanup(char ***tab, int j)
{
	while (j >= 0)
		free(*(tab)[j--]);
	free(*tab);
}

char		**strsplit(char const *s, char c)
{
	char	**tab;
	int		j;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	if (!(tab = malloc(sizeof (*tab) * (words + 1))))
		return (NULL);
	if ((j = copy_string(s, c, tab)) != -1)
	{
		memory_cleanup(&tab, j);
		return (NULL);
	}
	tab[words] = 0;
	return (tab);
}
