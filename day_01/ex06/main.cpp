#include "Karen.hpp"

/*int main(int ac, char **av) {
	std::string str = av[1];
	switch (str[0]) {
		case 'f' :
			std::cout << "Hello friend" << std::endl;
			break;
		case 'y' :
			std::cout << "Hey my Love" << std::endl;
			break;
		default:
			std::cout << "I don't know you" << std::endl;
	}
}*/

int main(int argc, char **argv) {
	
	if (argc == 2)
	{
		Karen	obj;

		obj.complain(argv[1]);
	}
	return (0);
}

