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

void Karen::complain(std::string level) {
	ptr_to_debug ptr[] = {&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error};

	std::string str[4] = {"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"};

	int i;
	for (i = 0; i < 4 ; i++)
		if (level == str[i])
		   (this->*ptr[i]) ();
}
