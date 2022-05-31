#include "easyfind.hpp"

/*
	How to initialize a vector in C++ (6 methods)

https://www.geeksforgeeks.org/initialize-a-vector-in-cpp-different-ways/

	The method supported by the compiler C++98

https://stackoverflow.com/questions/2236197/what-is-the-easiest-way-to-initialize-a-stdvector-with-hardcoded-elements


int main()
{
	//std::vector<int> arr  = [4, 5, 5]; // false
	
	// Create an empty vector, then push_back : method number 1
	// std::vector<int> vec;
	// vec.push_back(10);
	// vec.push_back(20);
	// vec.push_back(30);

	// Create a vector of size n with all values as 10 : method number 2
	// std::vector<int> vec(n, 10);

	// Initializing like arrays: method number 3
	// std::vector<int> vec{ 10, 20, 30 }; This method is supported by compiler supports C++11
	
	// Initializing from an array : method number 4
	// int arr[] = { 10, 20, 30 };
	// std::vector<int> vec(arr, arr + (sizeof(arr) / sizeof(arr[0]));

}
	
*/

/*
		How to use std::find ic C++

   	https://www.geeksforgeeks.org/std-find-in-cpp/

 
Example:

#include <iostream>
#include <vector>
#include <algorithm> // std::find

int main() {
	std::vector<int> vec { 10, 20, 30, 40 };

	// Iterator used to store the position of searched elt
	std::vector<int>::iterator iter;

	int elt = 30;

	// call to std::find
	iter = std::find (vec.begin(), vec.end(), elt);

	if (iter != vec.end())
	{
		std::cout << iter - vec.begin() << std::endl;
	}
	else
		std::cout << "Element not found." << std::endl;
	return (0);
}

*/

//	---------------------------------------------------------

const char* Myexception::what() const throw() {
		return "It can't be found";
}


int main() {
	std::vector<int> arr;

	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);

	try {
		easyfind(arr, 20);
	}
	catch (Myexception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		easyfind(arr, 40);
	}
	catch (Myexception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}

