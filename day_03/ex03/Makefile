NAME = Now_its_weird

CC = c++

FLAGS = -Wall -Wextra -Werror -Wshadow -Who-shadow

SRCS = main.cpp \
	   ClapTrap.cpp \
	   ScavTrap.cpp \
	   FragTrap.cpp \
	   DiamondTrap.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@ echo "\033[1;35m The name of the executable is: Now_its_weird \n\033[0m"

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean
	rm $(OBJS)

re: fclean all
