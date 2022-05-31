# ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"

class Animal {
	protected:
		std::string type;

	public:
		//Orthodox Canonical form
		Animal();
		virtual ~Animal();
		Animal(const Animal&);
		Animal& operator=(const Animal&);

		// member function
		std::string getType() const;
		virtual void makeSound() const;
};

//		----------------------------

class Cat : public Animal {
	private:
		Brain*	brain;

	public:
		//Orthodox Canonical form
		Cat();
		~Cat();
		Cat(const Cat&);
		Cat& operator=(const Cat&);

		// Override the virtual member function
		void makeSound() const;
};

//		-----------------------------

class Dog : public Animal {
	private:
		Brain*	brain;

	public:
		//Orthodox Canonical form
		Dog();
		~Dog();
		Dog(const Dog&);
		Dog& operator=(const Dog&);

		// Override the virtual member function
		void makeSound() const;
};

#endif
