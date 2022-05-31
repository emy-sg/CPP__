#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "Default Constructor FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str) {
	std::cout << "Parameterized Constructor FragTrap" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor FragTrap" << std::endl;
}

// Ressource: "Copy Constructor for derived class"
// 		http://www.cplusplus.com/forum/beginner/73730/

FragTrap::FragTrap(const FragTrap& instance) : ClapTrap(instance) {
	std::cout << "Copy Constructor FragTrap" << std::endl;
}


// Ressource: "Copy Assignement Operator for derived class"
// 		https://www.cs.technion.ac.il/users/yechiel/c++-faq/assignment-op-in-derived-class.html
// 		https://stackoverflow.com/questions/44263877/copy-assignment-operator-for-derived-class

FragTrap& FragTrap::operator=(const FragTrap& instance) {
	std::cout << "Copy Assignment Operator FragTrap" << std::endl;
	ClapTrap::operator = (instance);
	return (*this);
}

// public member function

void FragTrap::attack(const std::string& target) {
	std::cout << "FragTrap " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "High Fives" << std::endl;
}

