/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 02:21:37 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/07 02:21:38 by nkay-hoo         ###   ########.fr       */
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
/*
typedef struct	s_list
{
	void	*content;
	struct	s_list	*next;
}	t_list;
*/

/* Part 1 - Libc Functions - 23 */
/*
int	ft_isalpha(int n);
int	ft_isdigit(int n);
int	ft_isalnum(int n);
int	ft_isascii(int n);
int	ft_isprint(int n);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
memmove
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int	ft_toupper(int n);
int	ft_tolower(int n);
char	*ft_strchr(const char *s, int n);
char	*ft_strrchr(const char *s, int n);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
memchr
memcmp
strnstr
atoi
calloc
strdup
*/

/* Part 2 - Additional Functions - 11 */
/*
ft_substr
ft_strjoin
ft_strtrim
ft_split
ft_itoa
ft_strmapi
ft_striteri
ft_putchar_fd
ft_putstr_fd
ft_putendl_fd
ft_putnbr_fd
*/

/* Bonus Part - 9 */
/*
ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap
*/

#endif