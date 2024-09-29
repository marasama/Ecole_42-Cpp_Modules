# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adurusoy <adurusoy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/29 18:04:04 by adurusoy          #+#    #+#              #
#    Updated: 2024/02/21 18:53:53 by adurusoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
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
