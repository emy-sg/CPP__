#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Default Constructor Animal" << std::endl;
}

Animal::~Animal() {
	std::cout << "Destructor Animal" << std::endl;
}

Animal::Animal(const Animal& instance) {
	std::cout << "Copy Constructor Animal" << std::endl;
	*this = instance;
}

Animal& Animal::operator=(const Animal& instance) {
	std::cout << "Copy Assignment Operator Animal" << std::endl;
	type = instance.type;
	return (*this);
}

// member function
std::string Animal::getType() const {
	return (type);
}

void Animal::makeSound() const {
	std::cout << "cats don't bark" << std::endl;
}

//		--------------------------------------------

Dog::Dog() {
	std::cout << "Default Constructor Dog" << std::endl;
	type = "Dog";
	brain = new Brain;
}

Dog::~Dog() {
	std::cout << "Destructor Dog" << std::endl;
	delete brain;
}

Dog::Dog(const Dog& instance) {
	std::cout << "Copy Constructor Dog" << std::endl;
	*this = instance;
}

Dog& Dog::operator=(const Dog& instance) {
	std::cout << "Copy Assignment Operator Dog" << std::endl;
	delete brain;							// cuz I allocate memory in default constructor
	type = instance.type;
	brain = new Brain(*(instance.brain));     // can't use instance->brain cuz i have a ref& of instance
	return (*this);
}

// member function

void Dog::makeSound() const {
	std::cout << "Dog barks" << std::endl;
}

//		-------------------------------------------

Cat::Cat() {
	std::cout << "Default Constructor Cat" << std::endl;
	type = "Cat";
	brain = new Brain;
}

Cat::~Cat() {
	std::cout << "Destructor Cat" << std::endl;
	delete brain;
}

Cat::Cat(const Cat& instance) {
	std::cout << "Copy Constructor Cat" << std::endl;
	*this = instance;
}

Cat& Cat::operator=(const Cat& instance) {
	std::cout << "Copy Assignment Operator Cat" << std::endl;
	delete brain;							// cuz I allocate memory in defautl construtor
	type = instance.type;
	brain = new Brain(*(instance.brain));	// can't use instance->brain, cuz i have a ref& of instance
	return (*this);
}

// member function

void Cat::makeSound() const {
	std::cout << "Cat meows" << std::endl;
}

