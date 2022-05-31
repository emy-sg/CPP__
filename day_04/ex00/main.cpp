/*
						What is a Polymorphism in C++ ??
	
	- A class that declares or inherits a "virtual function" is called a "polymorphic class".

	- "Polymorphism" occurs when a call to a "member function" will cause a "different function to be
executed depending on the type of the object, when there is "hierarchy of classes", related by "inheritance.

	
		https://www.programiz.com/cpp-programming/polymorphism
	
	Polymorphism :
			("Compile Time" <==> "early Binding" used with ("function and operator overload") 
		   
			("Run Time" <==> "late Binding" used with ("virtual function"))

						-----------------------------------------
		https://www.geeksforgeeks.org/virtual-function-cpp/
		https://www.geeksforgeeks.org/c-plus-plus-gq/virtual-functions-gq/

						1- Virtual Function in C++

		==> "Virtual functions" cannot be "static".
		==> "Virtual functions" should be accessed using "pointer" or "reference of base class" type
				to achieve "Runtime polymorphism".
		==> A class may have "virtual destructor" but it "cannot have a virtual constructor".

						-------------------------------------------
			https://www.programmersought.com/article/20786430830/
			https://icarus.cs.weber.edu/~dab/cs1410/textbook/12.Polymorphism/implementing.html

						2- Working of Virtual functions:

			- If a class contains a "virtual function" then, compiler itself does two things:

				1- If object of that is created then a "virtual pointer(VPTR)" is inserte as 
					a data member of the class to point to "VTABLE" of that class.
					==> For each new object created, a "new virtual pointer" is inserted as "data member of that class".

				2- Irrespective of object is created or not, class contains as a member a
				 		"static array of function pointers called VTABLE".
					==> "Cells of this table" store the "address of each virtual function" contained "in that class".

		==> Initially, we create a pointer of type "base class" and initialize it with the address of the "derived class object".
		When we "create an object of" the "derived class", the "compiler creates a pointer as a data member" of the "VTABLE" of
	   	the "derived class".	

*/

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main() {
	//Cat mew;

// 	  ----------------------------------------

/*
	Animal *ptr = new Dog;    
	
	// https://www.geeksforgeeks.org/virtual-destructor/

	delete ptr;      // we should declare the destructor of Base class virtual, so the program can call the destructor of the derived class.
	
*/

//		-----------------------------------------

	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();

	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	meta->makeSound();

	delete meta;
	delete i;


//		----------------------------------------

/*	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
*/

}

