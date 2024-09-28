# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 11:33:45 by adurusoy          #+#    #+#              #
#    Updated: 2024/09/27 11:33:45 by adurusoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Iter
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp iter.hpp
OBJ = $(SRCS:.cpp = .o)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@figlet $(NAME) | lolcat

all: $(NAME)

clean:
	@rm -f $(OBJS)
	@rm -f $(NAME)
	@figlet TEMIZLENDI | lolcat

fclean: clean

re: fclean all

debug:
	@rm -f $(NAME)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@figlet DEBUGGING | lolcat
	valgrind ./$(NAME)

.PHONY: all clean fclean re debug