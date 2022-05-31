NAME = Mommy_when_I_grow_up_I_want_to_be_a_bureaucrat 

CC = c++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
	   Bureaucrat.cpp 

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@ echo "\033[1;35m The name of the executable is: Mommy_when_I_grow_up_I_want_to_be_a_bureaucrat \n\033[0m"

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean
	rm $(OBJS)

re: fclean all
