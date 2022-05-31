// Ressource:    Multi path inheritance required using Virtual Base class in C++
//			https://www.geeksforgeeks.org/virtual-base-class-in-c/#:~:text=Virtual%20base%20classes%20are%20used,hierarchy%20when%20using%20multiple%20inheritances.

#include "DiamondTrap.hpp"

// why use virtual inheritance:
// Error : ambiguous conversion from derived class 'DiamondTrap' to base class 'ClapTrap'

int main() {
	DiamondTrap emy("emy"), hss;
	emy.whoAmI();
	emy.attack("hss");

	hss = emy;

	hss.whoAmI();
	hss.attack("hsssss");

	return (0);
}
