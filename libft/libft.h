/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaghazar <vaghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 21:15:04 by vaghazar          #+#    #+#             */
/*   Updated: 2023/02/15 19:35:29 by vaghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define FREE_ON 1
# define FREE_OFF 2

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int			ft_isalpha(int argument);
int			ft_isdigit(int arg);
int			ft_isalnum(int argument);
int			ft_isascii(int c);
int			ft_isprint(int arg);
size_t		ft_strlen(const char *str);
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(const char	*big, const char *little, size_t len);
long long	ft_atoi(const char *nptr);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *src);
char		*ft_substr(char const *src, unsigned int start, size_t len);
char		*ft_strjoin(char *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
int			ft_putstr_fd(char *s, int fd, int flag);
int			ft_putendl_fd(char *s, int fd, int flag);
void		ft_putnbr_fd(int n, int fd);
int			ft_strcmp(char *s1, char *s2);
char		*ft_charjoin(char *s1, char const s2, int flag);
int			init_zero(int *ptr1, int *ptr2, int *ptr3, int *ptr4);
int         ft_perror(char *str);
int         free_double(char ***ptr);
int			free_arr(char **arr);
int         fill_null(void ***ptr, int len);
char		*get_next_line(int fd);
#endif
