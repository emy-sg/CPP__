# ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {
	private:
		int			hitpoints;
		int			energy;
		std::string	name;
		int			Attack_damage;

	public:
		// Orthodox Canonical form
		ClapTrap();
		ClapTrap(std::string);
		~ClapTrap();
		ClapTrap(const ClapTrap&);
		ClapTrap& operator=(const ClapTrap&);

		// public member function
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
