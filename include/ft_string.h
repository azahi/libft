/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:05 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/04/15 18:25:03 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <string.h>

# if defined(_BSD_SOURCE) || defined(_GNU_SOURCE)
#  include <ft_strings.h>
# endif

int		ft_memcmp(const void *a, const void *b, size_t c);
void	*ft_memchr(const void *a, int b, size_t c);
void	*ft_memcpy(void *restrict a, const void *restrict b, size_t c);
void	*ft_memmove(void *a, const void *b, size_t c);
void	*ft_memset(void *a, int b, size_t c);

char	*ft_strcpy(char *restrict a, const char *restrict b);
char	*ft_strncpy(char *restrict a, const char *restrict b, size_t c);

char	*ft_strcat(char *restrict a, const char *restrict b);
char	*ft_strncat(char *restrict a, const char *restrict b, size_t c);

int		ft_strcmp(const char *a, const char *b);
int		ft_strncmp(const char *a, const char *b, size_t c);

size_t	ft_strxfrm(char *restrict a, const char *restrict b, size_t c);

char	*ft_strchr(const char *a, int b);
char	*ft_strrchr(const char *a, int b);

size_t	ft_strcspn(const char *a, const char *b);
size_t	ft_strspn(const char *a, const char *b);
char	*ft_strpbrk(const char *a, const char *b);
char	*ft_strstr(const char *a, const char *b);
char	*ft_strtok(char *restrict a, const char *restrict b);

size_t	ft_strlen(const char *a);

# if defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE)
#  if defined(_XOPEN_SOURCE) || defined(_GNU_SOURCE) || defined(_BSD_SOURCE)

char	*ft_stpcpy(char *restrict a, const char *restrict b);
char	*ft_stpncpy(char *restrict a, const char *restrict b, size_t c);
char	*ft_strdup(const char *a);
char	*ft_strndup(const char *a, size_t b);
char	*ft_strtok_r(char *restrict a, const char *restrict b,
			char **restrict c);
size_t	ft_strnlen(const char *a, size_t b);

#  endif
# endif

# if defined(_XOPEN_SOURCE) || defined(_GNU_SOURCE) || defined(_BSD_SOURCE)

void	*ft_memccpy(void *restrict a, const void *restrict b, int c, size_t d);

# endif

# if defined(_GNU_SOURCE) || defined(_BSD_SOURCE)

char	*ft_strnstr(const char *a, const char *b, size_t c);
char	*ft_strsep(char **a, const char *b);
size_t	ft_strlcat(char *a, const char *b, size_t c);
size_t	ft_strlcpy(char *a, const char *b, size_t c);

# endif

# ifdef _GNU_SOURCE

char	*ft_strcasestr(const char *a, const char *b);
char	*ft_strchrnul(const char *a, int b);
void	*ft_mempcpy(void *a, const void *b, size_t c);
void	*ft_memrchr(const void *a, int b, size_t c);

# endif
#endif
