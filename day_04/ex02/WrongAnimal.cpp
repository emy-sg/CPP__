#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Default Constructor WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& instance) {
	std::cout << "Copy Constructor WrongAnimal" << std::endl;
	*this = instance;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& instance) {
	std::cout << "Copy Assignment Operator WrongAnimal" << std::endl;
	type = instance.type;
	return (*this);
}

// member function
std::string WrongAnimal::getType() const {
	return (type);
}

void WrongAnimal::makeSound() const {
	std::cout << "cats don't bark" << std::endl;
}

// ------------------------------------------

WrongCat::WrongCat() {
	std::cout << "Default Constructor WrongCat" << std::endl;
	type = "Cat";
}

WrongCat::~WrongCat() {
	std::cout << "Destructor WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat& instance) {
	std::cout << "Copy Constructor WrongCat" << std::endl;
	*this = instance;
}

WrongCat& WrongCat::operator=(const WrongCat& instance) {
	std::cout << "Copy Assignment Operator WrongCat" << std::endl;
	type = instance.type;
	return (*this);
}

// member function

/*std::string Cat::getType() const {
	return (type);
}*/

void WrongCat::makeSound() const {
	std::cout << "WrongCat meows" << std::endl;
}

