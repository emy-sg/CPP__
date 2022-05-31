#include "ClapTrap.hpp"

int main() {
/*	ClapTrap emy("emy"), hss, msn;

	// test: copy assignment operator
	hss = msn = emy;

	// test: copy constructor
	ClapTrap nn(emy);
*/
// --------------------------------------------

	ClapTrap emy("emy");
	emy.attack("zombie");
	emy.takeDamage(5);
	emy.beRepaired(5);


}
