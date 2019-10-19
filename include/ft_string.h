/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:05 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 00:21:11 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <string.h>

int		ft_ffs(int mask);
int		ft_ffsl(long mask);
int		ft_ffsll(long long mask);

int		ft_fls(int mask);
int		ft_flsl(long mask);
int		ft_flsll(long long mask);

void	*ft_memset(void *b, int c, size_t n);
void	*ft_memmove(void *d, const void *s, size_t n);
void	*ft_memcpy(void *src0, const void *dst0, size_t length);
void	*ft_memccpy(void *d, const void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memrchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strcpy(char *d, const char *s);
char	*ft_strncpy(char *dst, const char *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize);

char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dsize);

size_t	ft_strlen(const char *str);
size_t	ft_strnlen(const char *s, size_t mn);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchrnul(const char *p, int ch);

char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *s, const char *find, size_t slen);

int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_strcasecmp(const char *s1, const char *s2);
int		ft_strncasecmp(const char *s1, const char *s2, size_t n);

char	*ft_strdup(const char *s1);
char	*ft_strndup(const char *s1, size_t maxlen);

char	*ft_strpbrk(const char *p, const char *s);

size_t	ft_strxfrm(char *dst, const char *src, size_t n);

void	ft_swab(const void *from, void *to, size_t len);

#endif
