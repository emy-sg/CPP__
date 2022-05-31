#include "Weapon.hpp"

Weapon::Weapon() {
	std::cout << "Weapon Constructor have been called" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon Destructor have been called" << std::endl;
}

Weapon::Weapon(std::string str) {
	std::cout << "Weapon Constructor parameterize have been called" << std::endl;
	setType(str);
}

const std::string& Weapon::getType() {
	return type_str;
}

void	Weapon::setType(std::string str) {
	type_str = str;
}
