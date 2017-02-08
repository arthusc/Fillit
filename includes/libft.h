/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerhard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:28:19 by gerhard           #+#    #+#             */
/*   Updated: 2017/01/17 17:10:16 by gerhard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdint.h>

void		*ft_memcpy(void *dest, const void *src, size_t n);

void		*ft_memccpy(void *dest, const void *src, int c, size_t n);

void		*ft_memset(void *s, int c, size_t n);

void		*ft_memchr(const void *src, int c, size_t n);

void		*ft_memalloc(size_t size);

void		*ft_memmove(void *s1, void *s2, size_t n);

void		ft_striter(char *s, void (*f)(char *));

void		ft_strdel(char **str);

void		ft_memdel(void	**ap);

void		ft_strclr(char *s);

void		ft_bzero(void *s, size_t n);

void		ft_putchar(char c);

void		ft_putstr(const char *str);

void		ft_putendl(const char *s);

void		ft_putchar_fd(char c, int fd);

void		ft_putstr_fd(const char *s, int fd);

void		ft_putnbr_fd(int n, int fd);

void		ft_putnbr(int n);

void		ft_putendl_fd(const char *s, int fd);

void		ft_striteri(char *s, void (*f)(unsigned int, char *));

char		*ft_strtrim(const char *s);

char		*ft_itoa(int n);

char		*ft_strnew(size_t size);

char		*ft_strdup(const char *str);

char		*ft_strcpy(char *dest, const char *src);

char		*ft_strncpy(char *dest, const char *src, size_t n);

char		*ft_strstr(const char *src, const char *str);

char		*ft_strnstr(const char *src, const char *str, size_t n);

char		*ft_strchr(const char *str, int c);

char		*ft_strrchr(const char *str, int c);

char		*ft_strcat(char *dest, const char *src);

char		*ft_strncat(char *dest, const char *src, size_t n);

char		*ft_strmap(char const *str, char (*f)(char));

char		*ft_strmapi(char const *str, char (*f)(unsigned int, char));

char		*ft_strsub(char const *str, unsigned int start, size_t len);

char		*ft_strjoin(char const *s1, char const *s2);

char		**ft_strsplit(char const *s, char c);

int			ft_memcmp(const void *s1, const void *s2, size_t n);

int			ft_strcmp(const char *s1, const char *s2);

int			ft_strncmp(const char *s1, const char *s2, int n);

size_t		ft_strlen(const char *str);

size_t		ft_strlcat(char *dst, const char *src, size_t n);

int			ft_strequ(char const *s1, char const *s2);

int			ft_strnequ(char const *s1, char const *s2, size_t n);

int			ft_isalpha(int c);

int			ft_isdigit(int c);

int			ft_isalnum(int c);

int			ft_isprint(int c);

int			ft_isascii(int c);

int			ft_tolower(int c);

int			ft_toupper(int c);

int			ft_atoi(const char *str);
#endif
