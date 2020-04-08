/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <jdeathlo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 18:51:33 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/08 21:14:59 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_string.h>
#include <ft_unistd.h>
#include <stddef.h>
#include <uio.h>

char		*g_optarg;
int			g_opterr = 1;
int			g_optind = 1;
int			g_optopt;
int			g_optreset;

#define BADCH (int)'?'
#define BADARG (int)':'

#define EMSG ""

static char	*g_place = EMSG;

static void	print_argerr(char *name)
{
	ufputs(STDERR_FILENO, name);
	ufputs(STDERR_FILENO, ": option requires an argument -- \'");
	ufputc(STDERR_FILENO, g_optopt);
	ufputs(STDERR_FILENO, "\'\n");
}

static void	print_opterr(char *name)
{
	ufputs(STDERR_FILENO, name);
	ufputs(STDERR_FILENO, ": invalid option -- \'");
	ufputc(STDERR_FILENO, g_optopt);
	ufputs(STDERR_FILENO, "\'\n");
}

static int	get_help(int argc, char *const *argv, const char *ostr,
				char **oli)
{
	if ((g_optreset || !*g_place) || !(g_optopt = *g_place++))
	{
		g_optreset = 0;
		g_place = argv[g_optind];
		if (g_optind >= argc || *g_place++ != '-')
			return (((g_place = EMSG)) ? -1 : -1);
		if ((g_optopt = *g_place++) == '-' && !*g_place)
			return ((g_optind++ && (g_place = EMSG)) ? -1 : -1);
		if (!g_optopt && (g_optopt = '-'))
			if ((g_place = EMSG) && ft_strchr(ostr, '-') == NULL)
				return (-1);
	}
	if (g_optopt == ':' || !(*oli = ft_strchr(ostr, g_optopt)))
	{
		if (*g_place == '\0')
			++g_optind;
		if (g_opterr && *ostr != ':')
			print_opterr(argv[0]);
		return (BADCH);
	}
	return (0);
}

int			ft_getopt(int argc, char *const *argv, const char *ostr)
{
	char	*oli;
	int		c;

	if ((c = get_help(argc, argv, ostr, &oli)))
		return (c);
	if (!(oli[1] != ':' && !(g_optarg = NULL) &&
				((!*g_place && g_optind++) || 1)))
	{
		if (*g_place)
			g_optarg = g_place;
		else if (argc > ++g_optind)
			g_optarg = argv[g_optind];
		else
		{
			g_place = EMSG;
			if (*ostr == ':')
				return (BADARG);
			if (g_opterr)
				print_argerr(argv[0]);
			return (BADCH);
		}
		g_place = EMSG;
		g_optind++;
	}
	return (g_optopt);
}
