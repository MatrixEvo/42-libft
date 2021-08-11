# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/07 02:21:46 by nkay-hoo          #+#    #+#              #
#    Updated: 2021/08/12 03:07:19 by nkay-hoo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
AR = ar rcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = $(filter-out $(BONUSSRC), $(wildcard ft_*.c))
OBJ = $(SRC:%.c=%.o)
BONUSSRC = $(wildcard ft_*lst*.c)
BONUSOBJ = $(BONUSSRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

#bonus: $(OBJ) $(BONUSOBJ)
#	$(AR) $(NAME) $?

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	$(RM) $(OBJ) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY: all bonus clean fclean re so
