NAME = my_awesome_phonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror

SRCS =	main.cpp \
		contacts.cpp \
		phonebook.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@ echo "\033[1;35m The name of the executable is: my_awesome_phonebook\n\033[0m"

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean
	rm $(OBJS)

re: fclean all 
