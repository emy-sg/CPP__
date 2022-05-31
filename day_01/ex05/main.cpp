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

int main() {
	Karen	obj;
	std::string str;

	str = "INFO";
	std::cout << "====> "  << "Karen" << " " << str << std::endl;
	obj.complain(str);

	str = "ERROR";
	std::cout << "====> "  << "Karen" << " " << str << std::endl;
	obj.complain(str);

	str = "DEBUG";
	std::cout << "====> "  << "Karen" << " " << str << std::endl;
	obj.complain(str);

	str = "WARNING";
	std::cout << "====> "  << "Karen" << " " << str << std::endl;
	obj.complain(str);

	str = "new";
	std::cout << "====> "  << "Karen" << " " << str << std::endl;
	obj.complain(str);


	return (0);
}

