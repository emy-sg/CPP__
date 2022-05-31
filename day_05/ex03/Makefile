NAME = At_least_this_beats_coffee-making

CC = c++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
	   Bureaucrat.cpp \
	   Form.cpp \
	   ShrubberyCreationForm.cpp \
	   RobotomyRequestForm.cpp \
	   PresidentialPardonForm.cpp \
	   Intern.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@ echo "\033[1;35m The name of the executable is: At_least_this_beats_coffee-making \n\033[0m"

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean
	rm $(OBJS)

re: fclean all
