# ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	private:
		std::string *ideas;
	
	public:
		// Orthodox Canonical form
		Brain();
		~Brain();
		Brain(const Brain&);
		Brain& operator=(const Brain&);

};

#endif
