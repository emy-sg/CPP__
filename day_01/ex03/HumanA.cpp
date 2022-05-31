#include "HumanA.hpp"

HumanA::~HumanA(void) {
	std::cout << "Human A destructor has been called" << std::endl;
}

HumanA::HumanA(std::string str, Weapon& type) : name(str), weapon(type) {
}

void	HumanA::attack() {
	std::cout << this->name << " " << "attacks with their" << " " << this->weapon.getType() << std::endl;
}
