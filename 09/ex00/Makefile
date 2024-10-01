# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/29 12:17:23 by adurusoy          #+#    #+#              #
#    Updated: 2024/10/01 21:20:47 by adurusoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp BitcoinExchange.cpp

OBJ = $(SRCS:.cpp=.o)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@figlet $(NAME) | lolcat

all: $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@rm -f $(NAME)
	@figlet TEMIZLENDI | lolcat

fclean: clean

re: fclean all

debug: all
	@figlet DEBUGGING | lolcat
	valgrind ./$(NAME)

.PHONY: all clean fclean re debug
