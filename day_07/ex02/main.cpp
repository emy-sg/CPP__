#include "Array.hpp"

int main() {
	Array<int> one;		// diff method:  Array one = Array();
	
	std::cout << "size of the array is : " << one.size() << std::endl;
	try {
		std::cout << one[1] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	//	----------------------------------------------------

	Array<int> eArray(5);
	std::cout << "size of the array is : " << eArray.size() << std::endl;
	try {
		std::cout << eArray[1] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << eArray[-3] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << eArray[9] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}


	return (0);
}

