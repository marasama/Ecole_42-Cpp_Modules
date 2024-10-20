# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/29 12:17:23 by adurusoy          #+#    #+#              #
#    Updated: 2024/10/20 19:05:35 by adurusoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp RPN.cpp

OBJ = $(SRCS:.cpp=.o)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo $(NAME)

all: $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@rm -f $(NAME)	
	@echo TEMİZ

fclean: clean
	@rm -rf $(NAME).dSYM
	@echo TERTEMİZ

re: fclean all

debug: all
	@echo DEBUGGING
	@valgrind ./$(NAME)

.PHONY: all clean fclean re debug
