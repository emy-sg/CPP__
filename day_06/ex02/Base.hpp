# ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

class Base {
	public:
		virtual ~Base();
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};


// This fct: randomly instanciates A, B or C and returns the instance as a Base pointer.
Base*	generate(void);

// This fct(): prints the actual type of the object pointed to by p
void	identify(Base *p);

// This fct(): prints the actual type of the object pointed to by p
void	identify(Base	&p);

#endif

