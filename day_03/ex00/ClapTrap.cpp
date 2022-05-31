#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default Constructor ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string str) {
	std::cout << "Parameterized Constructor ClapTrap" << std::endl;
	name = str;
	hitpoints = 10;
	energy = 10;
	Attack_damage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& instance) {
	std::cout << "Copy Constructor ClapTrap" << std::endl;
	*this = instance;
	
		// OR

	/*name = instance.name;
	hitpoints = instance.hitpoints;
	energy = instance.energy;
	Attack_damage = instance.Attack_damage;*/
}

ClapTrap& ClapTrap::operator=(const ClapTrap& instance) {
	std::cout << "Copy Assignment Operator ClapTrap" << std::endl;
	name = instance.name;
	hitpoints = instance.hitpoints;
	energy = instance.energy;
	Attack_damage = instance.Attack_damage;
	return (*this);
}

// public member

void ClapTrap::attack(const std::string& target) {
	if (hitpoints > 0 && energy > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
		energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitpoints > 0 && energy > 0)
	{
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
		hitpoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitpoints > 0 && energy > 0)
	{
		std::cout << "ClapTrap " << name << " repairs itself, and gets " << amount << " hit points (health points) back." << std::endl;
		hitpoints += amount;
		energy--;
	}
}
