#include "Karen.hpp"

Karen::Karen() {
	std::cout << "Karen Constructor has been called" << std::endl;
}

Karen::~Karen() {
	std::cout << "Karen Destructor has been called" << std::endl;
}

void Karen::debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< std::endl;
}

void Karen::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Karen::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int check_for_level(std::string level)
{
	std::string str[4] = {"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"};

	int i;

	for (i = 0; i < 4 ; i++)
		if (level == str[i])
		   return (i);
	return (i);
}

void Karen::complain(std::string level) {
	ptr_to_debug ptr[] = {&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error};

	int i = check_for_level(level);
	switch (i) {
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*ptr[0]) ();
			//this->debug();
			std::cout << std::endl;

		case 1:
			std::cout << "[ INFO ]" << std::endl;
			(this->*ptr[1]) ();
			//this->info();
			std::cout << std::endl;

		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*ptr[2]) ();
			//this->warning();
			std::cout << std::endl;

		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*ptr[3]) ();
			//this->error();
			std::cout << std::endl;
		break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
