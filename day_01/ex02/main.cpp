/*
 	cherno: 
			https://www.youtube.com/watch?v=DTxHyVn0ODg&t=1s&ab_channel=TheCherno

	How is that possible that the reference have the same address memoir as the variable ?
		==> Regardless of how a reference is implemented, 
				a "Reference" has the same memory address as the item it references to.
		==> Cuz "Reference" does not have an address at all.
		==> A "Reference" is not a thing, but it refers to an object.
*/


#include <iostream>



int main(){
	std::string str = "HI THIS IS BRAIN";

	// A pointer to the string
	std::string *stringPTR;
	stringPTR = &str;

/*	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;

	*stringPTR = "hello";

	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	
	std::cout << "=====> " <<str << std::endl;
*/

	// A reference to the string
	std::string & stringREF = str;


	// Output
	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << & stringREF << std::endl;

	std::cout << "---------------------------------" << std::endl;	
	
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	
	return (0);
}
