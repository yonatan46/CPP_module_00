# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yonamog2 <yonamog2@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 14:52:53 by yonamog2          #+#    #+#              #
#    Updated: 2023/03/10 14:18:53 by yonamog2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

FILES = main.cpp PhoneBook.cpp Contact.cpp

OBJ = $(FILES:.cpp=.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
all : $(NAME)

$(NAME) : $(OBJ)

clean: 
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all bonus

.PHONY: all clean fclean re bonus