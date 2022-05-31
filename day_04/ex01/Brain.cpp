#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default Constructor Brain" << std::endl;
	ideas = new std::string[100];
}

Brain::~Brain() {
	std::cout << "Destructor Brain" << std::endl;
	delete [] ideas;
}

Brain::Brain(const Brain& instance) {
	std::cout << "Copy Constructor Brain" << std::endl;
	*this = instance;
}

Brain& Brain::operator=(const Brain& instance) {
	std::cout << "Copy Assignment Operator Brain" << std::endl;

	this->ideas = new std::string[100];			// to have deep copy, and not shallow copy
	for(int i = 0; i < 100 ; i++)
	{
		this->ideas[i] = instance.ideas[i];		// can't use instance->ideas cuz i have a ref& of instance
	}
	return (*this);
}

