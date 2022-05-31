# ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB{
	private:
		std::string name;
		Weapon		*weapon;

	public:
		HumanB();
		HumanB(std::string);
		~HumanB();
		
		void setWeapon(Weapon&);
		void attack();
};

#endif
