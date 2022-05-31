# ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string type;

	public:
		//Orthodox Canonical form
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal&);
		WrongAnimal& operator=(const WrongAnimal&);

		// member function
		std::string getType() const;
		void makeSound() const;
};

//		----------------------------

class WrongCat : public WrongAnimal {
	public:
		//Orthodox Canonical form
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat&);
		WrongCat& operator=(const WrongCat&);

		// Override the virtual member function
		//std::string getType() const;
		void makeSound() const;
};

#endif
