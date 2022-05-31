# Makefiles are used to help decide which parts of a large program need to be recompiled.
# It is used to compile C && C++ files.
# But it can be used beyond programs too, when you need a series of instructions to run depending on what files have changed.
# 

NAME = megaphone

CC = c++

FLAGS  = -Wall -Wextra -Werror

SRCS = megaphone.cpp

all:  $(NAME)
	@ echo "\033[1;35m The name of the executable is: megaphone\n\033[0m"

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all
