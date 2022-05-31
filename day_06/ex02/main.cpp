#include "Base.hpp"

//	------------------------------------------------------------------------

// Ressources:  About Daynamic_cast
//		https://www.geeksforgeeks.org/dynamic-_cast-in-cpp/#:~:text=Dynamic%20Cast%3A%20A%20cast%20is,function%20in%20the%20base%20class.

//	-------------------------------------------------------------------------

/*class Base {
	public:
	virtual void print() {
		std::cout << "Base" << std::endl;
	}
};

class Derived1 : public Base {
	public:
	void print() {
		std::cout << "Derived 1" << std::endl;
	}
};

class Derived2 : public Base {
	public:
	void print() {
		std::cout << "Derived 2" << std::endl;
	}
};
*/

/*int main() {
	Derived1 d1;
	d1.print();

	// Virtual function print() in the Base class, will ensure that the overriden by the function in the Derived class occurs.
	// ==> Virtual functions are "runtime polymorphism".
	
	//Derived1 d1;

	Base *b = &d1;
	b->print();
}
*/

//	---------------------------------------------------------------------------


// Static Variables like global variables are initialized as 0, if not initialized explicitly.

/*void fct() {
	static int i;
	std::cout << i << std::endl;
	if (i%2 == 0)
		std::cout << "divided by 2" << std::endl;
	else if (i%2 != 0 && i%3 == 0)
		std::cout << "divided by 3" << std::endl;
	else
		std::cout << "not divided by 2 and 3" << std::endl;
	i++;
}

int main() {
	fct();
	fct();
	fct();
}
*/


// ------------------------------------------------------------------------------

// Dynamic casting is mainly used for safe downcasting at run time.
// ==> Downcasting : Casting a "Base class pointer to a Derived class pointer".
// ==> Upcasting : Casting a "Derived class pointer to a Base class pointer".

// ==> To work on "dynamic_cast" there must be One Virtual function in the runtime.
// ==> (cuz polymorphic Base class uses in runtime to decide safe downcasting).

//int main() {
//	Derived1 d1;

//	Base *bp = dynamic_cast<Base*> (&d1);	// will work even without Vitual function, cuz 
											//  Base class pointer hold Derived! class object
	// --------------------------------

	/*Base b;
	Derived1* pb = dynamic_cast<Derived1*> (&b);  // got this error: Base is not polymorphic
	*/

	//	---------------------------------

	/*Derived1 *dp = dynamic_cast<Derived1*> (bp);
	
	if (dp == nullptr)
		std::cout << "null" << std::endl;
	else
		std::cout << "not null" << std::endl;
	*/

	//	----------------------------------
	
	/*Derived2 *dp2 = dynamic_cast<Derived2*> (bp);	// In this program, at the time of dynamic_casting base class
													// pointer holding the Derived1 object and assigning it to derived class 2
													// which is not valid dynamic_casting.
													// So, it returns a "null pointer" of that type in the result
	if (dp2 == nullptr)
		std::cout << "null" << std::endl;
	else
		std::cout << "not null" << std::endl;
	*/
	
//return (0);

//}

//	------------------------------------------------------------------

// References:	Also about dynamic_cast
//
// 			https://www.ibm.com/docs/en/i/7.2?topic=rtti-dynamic-cast-operator
//				==> https://www.ibm.com/docs/en/i/7.2?topic=operator-dynamic-casts-references
//
// 	https://stackoverflow.com/questions/1276847/difference-in-behavior-while-using-dynamic-cast-with-reference-and-pointers

//	--------------------------------------------------------------------

int main() {
	Base *bp1 = generate();
	identify(bp1);
	identify(*bp1);

	Base *bp2 = generate();
	identify(bp2);
	identify(*bp2);

	Base *bp3 = generate();
	identify(bp3);
	identify(*bp3);

	Base *bp4 = generate();
	identify(bp4);
	identify(*bp4);

	return (0);
}

