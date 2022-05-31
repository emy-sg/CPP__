NAME = Serialize

CC = c++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
	   serialize.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@ echo "\033[1;35m The name of the executable is: Serialize \n\033[0m"

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJS)

re: fclean all
