# ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// Ressource:    Multi path inheritance required using Virtual Base class in C++
//			https://www.geeksforgeeks.org/virtual-base-class-in-c/#:~:text=Virtual%20base%20classes%20are%20used,hierarchy%20when%20using%20multiple%20inheritances.


class DiamondTrap : public FragTrap,  public ScavTrap {
	private:
		std::string name;

	public:
		// Orthodox Canonical form
		DiamondTrap();
		DiamondTrap(std::string str);
		~DiamondTrap();

		DiamondTrap(const DiamondTrap&);
		DiamondTrap& operator=(const DiamondTrap&);
	
		// public member function
		void whoAmI();
		void attack(const std::string&);
};

#endif
