# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adurusoy <adurusoy@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/29 18:04:04 by adurusoy          #+#    #+#              #
#    Updated: 2024/02/02 16:17:34 by adurusoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC = phonebook.cpp main.cpp contact.cpp phonebook.hpp
CC = g++
RM = rm -rf
CCFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME):
	@$(CC) $(SRC) $(CCFLAGS) -o $(NAME)
	@echo DONE...

clean :
	@$(RM) $(NAME)
	@echo Clean

fclean:
	@$(RM) $(NAME)
	@echo "Full Clean"

re: fclean $(NAME)

.PHONY: all clean fclean re
