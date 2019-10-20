/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:05 by jdeathlo          #+#    #+#             */
/*   Updated: 2019/10/20 21:18:14 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <string.h>

char	*ft_strcat(char *dst, const char *src);
char	*ft_strchr(const char *str, int ch);
char	*ft_strchrnul(const char *str, int ch);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *str);
char	*ft_strjoin(const char *str1, const char *str2);
char	*ft_strlwr(const char *str);
char	*ft_strncat(char *dst, const char *src, size_t size);
char	*ft_strncpy(char *dst, const char *src, size_t size);
char	*ft_strndup(const char *str, size_t size);
char	*ft_strnstr(const char *str, const char *find, size_t size);
char	*ft_strpbrk(const char *str, const char *charset);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strstr(const char *str, const char *find);
char	*ft_strupr(const char *str);
int		ft_ffs(int mask);
int		ft_ffsl(long mask);
int		ft_ffsll(long long mask);
int		ft_fls(int mask);
int		ft_flsl(long mask);
int		ft_flsll(long long mask);
int		ft_memcmp(const void *str1, const void *str2, size_t size);
int		ft_strcasecmp(const char *str1, const char *str2);
int		ft_strcmp(const char *str1, const char *str2);
int		ft_strncasecmp(const char *str1, const char *str2, size_t size);
int		ft_strncmp(const char *str1, const char *str2, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
size_t	ft_strnlen(const char *str, size_t size);
size_t	ft_strxfrm(char *dst, const char *src, size_t size);
void	*ft_memccpy(void *dst, const void *src, int ch, size_t size);
void	*ft_memchr(const void *str, int ch, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t size);
void	*ft_memrchr(const void *str, int ch, size_t size);
void	*ft_memset(void *str, int ch, size_t size);
void	ft_swab(const void *src, void *dst, size_t size);

#endif
