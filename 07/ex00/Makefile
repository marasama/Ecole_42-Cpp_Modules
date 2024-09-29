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

NAME = templates
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp
OBJ = $(SRCS:.cpp=.o)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@figlet $(NAME) | lolcat

all: $(NAME)

clean:
	@rm -f $(OBJ)
	@rm -f $(NAME)
	@figlet TEMIZLENDI | lolcat

fclean: clean

re: fclean all

debug: re
	@figlet DEBUGGING | lolcat
	valgrind ./$(NAME)

.PHONY: all clean fclean re debug