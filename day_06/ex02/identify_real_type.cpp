#include "Base.hpp"

Base::~Base() {
}

Base*	generate(void) {
	Base* bp;
	static int i;	// we can use rand() fct

	if (i%2 == 0)
		bp = new A();
	else if (i%3 == 0)
		bp = new B();
	else
		bp = new C();
	i++;
	return (bp);
}

void	identify(Base* p) {
	A	*a = dynamic_cast<A*> (p);
	if (a) {
		std::cout << "Type of object pointed to by p is A" << std::endl;
		return ;
	}

	B	*b = dynamic_cast<B*> (p);
	if (b) {
		std::cout << "Type of object pointed to by p is B" << std::endl;
		return ;
	}

	C	*c = dynamic_cast<C*> (p);
	if (c) {
		std::cout << "Type of object pointed to by p is C" << std::endl;
		return ;
	}
}

// References:
// 			https://www.ibm.com/docs/en/i/7.2?topic=rtti-dynamic-cast-operator
//				==> https://www.ibm.com/docs/en/i/7.2?topic=operator-dynamic-casts-references
//
// 			https://stackoverflow.com/questions/1276847/difference-in-behavior-while-using-dynamic-cast-with-reference-and-pointers

void	identify(Base& p) {
	try {
			A& a = dynamic_cast<A&> (p);
			std::cout << "Type of object pointed to by p is A" << std::endl;
	}
	catch (std::bad_cast &exp) {
	}

	try {
			B& b = dynamic_cast<B&> (p);
			std::cout << "Type of object pointed to by p is B" << std::endl;
	}
	catch (std::bad_cast &exp) {
	}

	try {
			C& c = dynamic_cast<C&> (p);
			std::cout << "Type of object pointed to by p is C" << std::endl;
	}
	catch (std::bad_cast &exp) {
	}
}
