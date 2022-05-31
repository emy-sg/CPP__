#include "ScavTrap.hpp"

int main() {
	/*ClapTrap emy("emy"), hss, msn;

	// test: copy assignment operator
	hss = msn = emy;

	// test: copy constructor
	ClapTrap nn(emy);
	*/
// --------------------------------------------

	/*ClapTrap emy("emy");
	emy.attack("zombie");
	emy.takeDamage(5);
	emy.beRepaired(5);
	*/

// --------------------------------------------

/*
	//Simple test;

	//	ScavTrap emy;

*/

//	-------------------------------------------

	ScavTrap emy("hss"), hss("Me"), msn, nn;
	emy.attack("Monster");		// simple test
	
	// test Copy Constructor
	ScavTrap mew(emy);
	mew.attack("NoUBI");

	// test Copy Assignment Operator
	msn = nn = emy;
	msn.attack("Monster");
	nn.attack("Ninja");

	msn.guardGate();

//   -------------------------------------------------
/*   Ressource:
//   			https://www.programiz.com/cpp-programming/function-overriding


	// To call the attack() member fct of Base class you can use:
	// 		derived.base::fct();


	msn.ClapTrap::attack("hohoho");

					//   OR
	
	//  Declare a pointer to base and give it the address of the derived class
	//   cuz:
	//  		lbase class can take the address of the derived class, like mbani said
	//  				"lbase na3tiha lchild radi ta5dam, otherwise is fault"
	//
	
	ClapTrap *me = &msn;

	me->attack("HOW");

*/
}
