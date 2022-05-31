# ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

// "Base class" and the new class is referred to as the "derived class".
/*
    A "derived class" inherits all "Base class" methos, with the following exceptions:
		- "Constructor", "Destructor" and "copy construtor" of the "Base class".
 		- "Overload operators" of the "Base class".
 		- "friend function" of the "Base class".
*/



#include "ClapTrap.hpp"




// However, its constructors, destructor and attack() will print different messages.

class ScavTrap : public ClapTrap {
	
	public:
	// Orthodox Canonical form
	ScavTrap();
	ScavTrap(std::string);
	~ScavTrap();

	ScavTrap(const ScavTrap& );
	ScavTrap& operator=(const ScavTrap& );
		
	// public member fct
	void attack(const std::string& target);
	void guardGate();
};

#endif
