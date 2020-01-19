/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:14:05 by jdeathlo          #+#    #+#             */
/*   Updated: 2020/01/19 13:48:55 by jdeathlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <string.h>

char	*ft_index(const char *, int);
char	*ft_rindex(const char *, int);
char	*ft_stpcpy(char *, const char *);
char	*ft_stpncpy(char *, const char *, size_t);
char	*ft_strcasestr(const char *, const char *);
char	*ft_strcat(char *, const char *);
char	*ft_strchr(const char *, int);
char	*ft_strchrnul(const char *, int);
char	*ft_strcpy(char *, const char *);
char	*ft_strdup(const char *);
char	*ft_strlwr(const char *);
char	*ft_strncat(char *, const char *, size_t);
char	*ft_strncpy(char *, const char *, size_t);
char	*ft_strndup(const char *, size_t);
char	*ft_strnstr(const char *, const char *, size_t);
char	*ft_strpbrk(const char *, const char *);
char	*ft_strrchr(const char *, int);
char	*ft_strsep(char **, const char *);
char	*ft_strstr(const char *, const char *);
char	*ft_strtok(char *, const char *);
char	*ft_strupr(const char *);
int		ft_bcmp(const void *, const void *, size_t);
int		ft_ffs(int);
int		ft_ffsl(long);
int		ft_ffsll(long long);
int		ft_fls(int);
int		ft_flsl(long);
int		ft_flsll(long long);
int		ft_memcmp(const void *, const void *, size_t);
int		ft_strcasecmp(const char *, const char *);
int		ft_strcmp(const char *, const char *);
int		ft_strncasecmp(const char *, const char *, size_t);
int		ft_strncmp(const char *, const char *, size_t);
size_t	ft_strcspn(const char *, const char *);
size_t	ft_strlcat(char *, const char *, size_t);
size_t	ft_strlcpy(char *, const char *, size_t);
size_t	ft_strlen(const char *);
size_t	ft_strnlen(const char *, size_t);
size_t	ft_strspn(const char *, const char *);
size_t	ft_strxfrm(char *, const char *, size_t);
void	*ft_memccpy(void *, const void *, int ch, size_t);
void	*ft_memchr(const void *, int, size_t);
void	*ft_memcpy(void *, const void *, size_t);
void	*ft_memmove(void *, const void *, size_t);
void	*ft_mempcpy(void *, const void *, size_t);
void	*ft_memrchr(const void *, int, size_t);
void	*ft_memset(void *, int, size_t);
void	ft_bcopy(const void *, void *, size_t);
void	ft_bzero(void *, size_t);
void	ft_swab(const void *, void *, size_t);

#endif
