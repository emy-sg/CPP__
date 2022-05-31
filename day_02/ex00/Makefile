NAME = My_First_Class_in_Orthodox_Canonical_Form

CC = c++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
	   Fixed.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@ echo "\033[1;35m The name of the executable is: My_First_Class_in_Orthodox_Canonical_Form \n\033[0m"

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean
	rm $(OBJS)

re: fclean all
