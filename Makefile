# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/07 02:21:46 by nkay-hoo          #+#    #+#              #
#    Updated: 2021/08/08 00:13:53 by nkay-hoo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all : $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror

clean :

fclean :

re :

.PHONY : all clean fclean re