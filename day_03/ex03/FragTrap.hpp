# ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public:
		// Orthodox Canonical form
		FragTrap(void);
		FragTrap(std::string);
		~FragTrap(void);
		
		FragTrap(const FragTrap&);
		FragTrap& operator=(const FragTrap&);

		//public member functions
		void highFivesGuys(void);
		void attack(const std::string& target);
};

#endif
