#include "DiamondTrap.hpp"

// Ressource:    Multi path inheritance required using Virtual Base class in C++
//			https://www.geeksforgeeks.org/virtual-base-class-in-c/#:~:text=Virtual%20base%20classes%20are%20used,hierarchy%20when%20using%20multiple%20inheritances.

DiamondTrap::DiamondTrap(void) {
	std::cout << "Default Constructor DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string str) : ClapTrap(str + "_clap_name") {
	std::cout << "Parameterized Constructor DiamondTrap" << std::endl;
	name = str;
	//ClapTrap::name = str + "_clap_name";     /// instead of Derived::ClapTrap::name
	hitpoints = FragTrap::ClapTrap::hitpoints;  
	energy = ScavTrap::ClapTrap::energy;
	Attack_damage = FragTrap::ClapTrap::Attack_damage;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Destructor DiamondTrap" << std::endl;
}

// Ressource: "Copy Constructor for derived class"
// 		http://www.cplusplus.com/forum/beginner/73730/

DiamondTrap::DiamondTrap(const DiamondTrap& instance) {
	std::cout << "Copy Constructor DiamondTrap" << std::endl;
	*this = instance;
}


// Ressource: "Copy Assignement Operator for derived class"
// 		https://www.cs.technion.ac.il/users/yechiel/c++-faq/assignment-op-in-derived-class.html
// 		https://stackoverflow.com/questions/44263877/copy-assignment-operator-for-derived-class

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& instance) {
	std::cout << "Copy Assignment Operator DiamondTrap" << std::endl;
	name = instance.name;
	ClapTrap::name = instance.ClapTrap::name;
	FragTrap::ClapTrap::hitpoints = instance.FragTrap::ClapTrap::hitpoints;
	ScavTrap::ClapTrap::energy = instance.ScavTrap::ClapTrap::energy;
	FragTrap::ClapTrap::Attack_damage = instance.FragTrap::ClapTrap::Attack_damage;
	return (*this);
}

// public member function

void DiamondTrap::whoAmI() {
	std::cout << "Name of DiamondTrap " << name << ", and the Name of the ClapTrap is " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

