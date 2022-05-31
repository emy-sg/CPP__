#	Compilation steps:
#		1- Preprocessing: replace the Macros and Header files in the Source file(.c).
#		2- Obj files: Compile and transform the Source files to Binary files.
#		3- Linking: link all the Object files(.o) to create One executable binary.
#

#	|Preprocessing|     ----->    |Object files|     ------>     |Linking|   -----> .exec

#$(CC)	-E $(SRCS)					-c $(SRCS)									-o $(NAME)

#		 .c								.o										./execFile

NAME = HI_THIS_IS_BRAIN

CC = c++

FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@ echo "\033[1;35m The name of the executable is: HI_THIS_IS_BRAIN \n\033[0m"

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	
clean:
	rm $(NAME)

fclean: clean
	rm $(OBJS)

re: fclean all
