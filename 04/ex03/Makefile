# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/29 18:04:04 by adurusoy          #+#    #+#              #
#    Updated: 2024/04/27 06:42:42 by adurusoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = magic
SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp
CC = c++
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
