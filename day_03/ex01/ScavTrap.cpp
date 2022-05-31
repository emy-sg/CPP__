/*
  Ressource:
  			"https://www.studytonight.com/cpp/order-of-constructor-call.php"

  => 1- When we derive a class from the base class, 
	then all the data members of the base class will become a member 
	of the derived class.

 => 2- We use the constructor to initialize the data members,
	and here the obvious cases is the data that is inherited into
	the derived class, but who's responsible to initialize them ?

	==> To initialize the inherited data members constructor,
			is necessary and that's why the constructor of the base class is
			called first.

*/

#include "ScavTrap.hpp"

//					"lbase na3tiha lchild radi tar5dam" mbani was here

// ScavTrap will inherit the constructors and destructor from ClapTrap.
// However, its "constructor", "destructor" and "attack()" will print different messages.

ScavTrap::ScavTrap() {
	std::cout << "Default Constructor ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str) {
	std::cout << "Parameterized Constructor ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap" << std::endl;
}

// Ressource:
// 				"Copy Constructor for derived class"

// 			http://www.cplusplus.com/forum/beginner/73730/

ScavTrap::ScavTrap(const ScavTrap& instance) : ClapTrap(instance) {
	std::cout << "Copy Constructor ScavTrap" << std::endl;
}

// Ressource: 
// 				"Copy assignment operator for derived class" 
	
// 		https://www.cs.technion.ac.il/users/yechiel/c++-faq/assignment-op-in-derived-class.html

//		https://stackoverflow.com/questions/44263877/copy-assignment-operator-for-derived-class


ScavTrap& ScavTrap::operator=(const ScavTrap& instance) {
	ClapTrap::operator = (instance);	
	return (*this);
}

// public functions member

void ScavTrap::attack(const std::string& target) {
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}

