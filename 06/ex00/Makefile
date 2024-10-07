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

NAME = ScalarConverter

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp ScalarConverter.cpp

OBJ = $(SRCS:.cpp=.o)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@rainbowfiglet $(NAME)

all: $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@rm -f $(NAME)	
	@rainbowfiglet TEMİZ

fclean: clean
	@rm -rf $(NAME).dSYM
	@rainbowfiglet TERTEMİZ

re: fclean all

debug: all
	@rainbowfiglet DEBUGGING
	@valgrind ./$(NAME)

.PHONY: all clean fclean re debug
