# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/29 18:04:04 by adurusoy          #+#    #+#              #
#    Updated: 2024/02/15 03:44:25 by adurusoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Megaphone
SRC = Megaphone.cpp
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
