NAME = No_you_need_form_28B_not_28C

CC = c++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
	   Bureaucrat.cpp \
	   Form.cpp \
	   ShrubberyCreationForm.cpp \
	   RobotomyRequestForm.cpp \
	   PresidentialPardonForm.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@ echo "\033[1;35m The name of the executable is: No_you_need_form_28B_not_28C \n\033[0m"

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean
	rm $(OBJS)

re: fclean all
