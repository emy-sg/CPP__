NAME = Now_we_re_talking
CC = c++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
	   Fixed.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@ echo "\033[1;35m The name of the executable is:  Now_we_re_talking \n\033[0m"

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean
	rm $(OBJS)

re: fclean all
