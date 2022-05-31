# ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	private:
		std::string type_str;

	public:
		Weapon();
		Weapon(std::string);
		~Weapon();

		const std::string&	getType();
		void				setType(std::string);
};

#endif
