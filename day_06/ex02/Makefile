NAME = Identify_real_type

CC = c++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
	   identify_real_type.cpp 

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@ echo "\033[1;35m The name of the executable is: Identify_real_type \n\033[0m"

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJS)

re: fclean all
