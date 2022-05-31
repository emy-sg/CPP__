NAME = Start_with_a_few_functions

CC = c++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@ echo "\033[1;35m The name of the executable is: Start_with_a_few_functions \n\033[0m"

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJS)

re: fclean all
