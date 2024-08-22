
NAME = politics
SRC = main.cpp Bureaucrat.cpp Form.cpp	ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
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