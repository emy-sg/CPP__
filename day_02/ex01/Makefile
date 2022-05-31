NAME = Towards_a_more_useful_fixed_point_number_class

CC = c++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
	   Fixed.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@ echo "\033[1;35m The name of the executable is: Towards_a_more_useful_fixed_point_number_class \n\033[0m"

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean
	rm $(OBJS)

re: fclean all
