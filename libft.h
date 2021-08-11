/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:21:37 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/12 01:20:52 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <strings.h>
# include <ctype.h>
# include <bsd/string.h>
# include <stdlib.h>
# include <unistd.h>

/* Bonus Struct */
//typedef struct	s_list
//{
//	void	*content;
//	struct	s_list	*next;
//}	t_list;

/* Part 1 - Libc Functions - 23 */
int		ft_isalpha(int n);
int		ft_isdigit(int n);
int		ft_isalnum(int n);
int		ft_isascii(int n);
int		ft_isprint(int n);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_toupper(int n);
int		ft_tolower(int n);
char	*ft_strchr(const char *s, int n);
char	*ft_strrchr(const char *s, int n);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *ptr);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s);

/* Part 2 - Additional Functions - 11 */
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
//char	*ft_strtrim(char const *s1, char const *set);
//ft_split
//ft_itoa
//ft_strmapi
//ft_striteri
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* Bonus Part - 9 */
//ft_lstnew
//ft_lstadd_front
//ft_lstsize
//ft_lstlast
//ft_lstadd_back
//ft_lstdelone
//ft_lstclear
//ft_lstiter
//ft_lstmap

#endif
