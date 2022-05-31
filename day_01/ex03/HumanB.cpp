#include "HumanB.hpp"

HumanB::HumanB(void) {
	std::cout << "Human B constructor has been called" << std::endl;
}

HumanB::~HumanB(void) {
	std::cout << "Human B destructor has been called" << std::endl;
}

HumanB::HumanB(std::string str) : name(str) {
}

void	HumanB::setWeapon(Weapon& type) {
	weapon = &type;
}

void	HumanB::attack() {
	std::cout << this->name << " " << "attacks with their" << " " << this->weapon->getType() << std::endl;
}
