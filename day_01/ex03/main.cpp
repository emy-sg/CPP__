#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
int main() {
/*	Weapon club("crude spided club");
	std::cout << club.getType() << std::endl;

	club.setType("some other type of club");
	std::cout << club.getType() << std::endl;*/

/*{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}*/

{

	std::cout << "-----------------------------" << std::endl;
	Weapon club = Weapon("crude spiked club");
	std::cout << "-----------------------------" << std::endl;
	HumanB jim("Jim");
	std::cout << "-----------------------------" << std::endl;
	jim.setWeapon(club);
	std::cout << "-----------------------------" << std::endl;
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}

}
