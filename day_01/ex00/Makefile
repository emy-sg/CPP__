NAME = BraiiiiiiinnnzzzZ

CC = c++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
	   Zombie.cpp \
	   newZombie.cpp \
	   randomChump.cpp 

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@ echo "\033[1;35m The name of the executable is: BraiiiiiiinnnzzzZ \n\033[0m"

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean
	rm $(OBJS)

re: fclean all
