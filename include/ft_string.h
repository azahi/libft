/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:05 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/03/13 01:12:20 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <string.h>

char	*ft_index(const char *a, int b);
char	*ft_rindex(const char *a, int b);
char	*ft_stpcpy(char *a, const char *b);
char	*ft_stpncpy(char *a, const char *b, size_t c);
char	*ft_strcasestr(const char *a, const char *b);
char	*ft_strcat(char *a, const char *b);
char	*ft_strchr(const char *a, int b);
char	*ft_strchrnul(const char *a, int b);
char	*ft_strcpy(char *a, const char *b);
char	*ft_strdup(const char *a);
char	*ft_strlwr(const char *a);
char	*ft_strncat(char *a, const char *b, size_t c);
char	*ft_strncpy(char *a, const char *b, size_t c);
char	*ft_strndup(const char *a, size_t b);
char	*ft_strnstr(const char *a, const char *b, size_t c);
char	*ft_strpbrk(const char *a, const char *b);
char	*ft_strrchr(const char *a, int b);
char	*ft_strsep(char **a, const char *b);
char	*ft_strstr(const char *a, const char *b);
char	*ft_strtok(char *a, const char *b);
char	*ft_strupr(const char *a);
int		ft_bcmp(const void *a, const void *b, size_t c);
int		ft_ffs(int a);
int		ft_ffsl(long a);
int		ft_ffsll(long long a);
int		ft_fls(int a);
int		ft_flsl(long a);
int		ft_flsll(long long a);
int		ft_memcmp(const void *a, const void *b, size_t c);
int		ft_strcasecmp(const char *a, const char *b);
int		ft_strcmp(const char *a, const char *b);
int		ft_strncasecmp(const char *a, const char *b, size_t c);
int		ft_strncmp(const char *a, const char *b, size_t c);
size_t	ft_strcspn(const char *a, const char *b);
size_t	ft_strlcat(char *a, const char *b, size_t c);
size_t	ft_strlcpy(char *a, const char *b, size_t c);
size_t	ft_strlen(const char *a);
size_t	ft_strnlen(const char *a, size_t b);
size_t	ft_strspn(const char *a, const char *b);
size_t	ft_strxfrm(char *a, const char *b, size_t c);
void	*ft_memccpy(void *a, const void *b, int c, size_t d);
void	*ft_memchr(const void *a, int b, size_t c);
void	*ft_memcpy(void *a, const void *b, size_t c);
void	*ft_memmove(void *a, const void *b, size_t c);
void	*ft_mempcpy(void *a, const void *b, size_t c);
void	*ft_memrchr(const void *a, int b, size_t c);
void	*ft_memset(void *a, int b, size_t c);
void	ft_bcopy(const void *a, void *b, size_t c);
void	ft_bzero(void *a, size_t b);
void	ft_swab(const void *a, void *b, size_t c);

#endif
