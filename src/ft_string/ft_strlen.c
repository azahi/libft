/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:52:40 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/19 15:10:22 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
size_t	ft_strlen(const char *s)
{
	size_t n;

	n = 0;
	while (*s++)
		n++;
	return (n);
}
*/

#include <limits.h>
#include <sys/types.h>
#include <stdint.h>

/*
** Portable strlen() for 32-bit and 64-bit systems.
**
** Rationale: it is generally much more efficient to do word length
** operations and avoid branches on modern computer systems, as
** compared to byte-length operations with a lot of branches.
**
** The expression:
**
**	((x - 0x01....01) & ~x & 0x80....80)
**
** would evaluate to a non-zero value iff any of the bytes in the
** original word is zero.
**
** On multi-issue processors, we can divide the above expression into:
**	a)  (x - 0x01....01)
**	b) (~x & 0x80....80)
**	c) a & b
**
** Where, a) and b) can be partially computed in parallel.
**
** The algorithm above is found on "Hacker's Delight" by
** Henry S. Warren, Jr.
*/

#ifndef LONG_BIT
# define LONG_BIT 64 // TODO
#endif

#if LONG_BIT == 32
static const unsigned long mask01 = 0x01010101;
static const unsigned long mask80 = 0x80808080;
#elif LONG_BIT == 64
static const unsigned long mask01 = 0x0101010101010101;
static const unsigned long mask80 = 0x8080808080808080;
#endif

#define	LONGPTR_MASK (sizeof(long) - 1)

#define testbyte(x)					\
	do {							\
		if (p[x] == '\0')			\
		    return (p - str + x);	\
	} while (0)

/*
** Before trying the hard (unaligned byte-by-byte access) way
** to figure out whether there is a nul character, try to see
** if there is a nul character is within this accessible word
** first.
**
** p and (p & ~LONGPTR_MASK) must be equally accessible since
** they always fall in the same memory page, as long as page
** boundaries is integral multiple of word size.
*/

size_t	ft_strlen(const char *str)
{
	const char			*p;
	const unsigned long	*lp;
	long				va;
	long				vb;

	lp = (const unsigned long *)((uintptr_t)str & ~LONGPTR_MASK);
	va = (*lp - mask01);
	vb = ((~*lp) & mask80);
	lp++;
	if (va & vb)
	{
		p = str;
		while (p < (const char *)lp)
		{
			if (*p == '\0')
				return (p - str);
			p++;
		}
	}
	while (1)
	{
		va = (*lp - mask01);
		vb = ((~*lp) & mask80);
		if (va & vb)
		{
			p = (const char *)(lp);
			testbyte(0);
			testbyte(1);
			testbyte(2);
			testbyte(3);
#if (LONG_BIT >= 64)
			testbyte(4);
			testbyte(5);
			testbyte(6);
			testbyte(7);
#endif
		}
		lp++;
	}
	return (0);
}
