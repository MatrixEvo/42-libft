# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/07 02:21:46 by nkay-hoo          #+#    #+#              #
#    Updated: 2021/08/12 00:43:38 by nkay-hoo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJ = $(SRC:%.c=%.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = $(filter-out $(BSOURCES), $(wildcard ft_*.c))
BONUSSRC = $(wildcard ft_*lst*.c)
BONUSOBJ = $(BONUSSRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	$(RM) $(OBJ) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(BONUSOBJ)
	ar rcs $(NAME) $(BONUSOBJ)

.PHONY: all $(NAME) %.o clean fclean re bonus