#include "Span.hpp"

/*
	1-	Allocate memory for a vector in C++ 

			https://stackoverflow.com/questions/4427738/allocate-memory-for-a-vector

	int main() {
		std::vector<int> vec1;

		vec1.reserve(100);

		std::cout << vec1.size() << std::endl;
		std::cout << vec1.capacity ()<< std::endl;

		//	-----------------------------------
		std::vector<int> vec2;
		
		vec2.resize(100);

		std::cout << vec2.size() << std::endl;
		std::cout << vec2.capacity ()<< std::endl;

	}
*/

/*
	2-  "vector::operator[]" VS "vector::push_back"

		https://stackoverflow.com/questions/11007054/vectorpush-back-vs-vectoroperator#:~:text=Generally%2C%20when%20adding%20new%20elements,to%20maintain%20normal%20array%20syntax.

		==> "push_back" creates a new element on the back with the value specified.
		==> "operator[]" requires the element to be there; it just accesses it.

*/

/*
	3-	Diff btw vector's "insert" and "push_swap" difference

			https://stackoverflow.com/questions/13324431/c-vectors-insert-push-back-difference#:~:text=The%20biggest%20difference%20is%20their,This%20impacts%20the%20performance.

	==> The biggest difference is their functionality.
	==> "push_back" always puts a new element at the end of the vector.
	==> And "insert" allows you to select new element's position. This impacts the performance of vector.
	(vector elements are moved in the memory only when it's necessary to increase it's length because too little memory was allocated for it)
*/

//		-----------------------------------------------------------

int main() {
	Span vec;
	try {
		vec.addNumber(9);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// -------------------------------------------
	
	Span sp = Span(5);

/*	try {
		sp.addNumber(6);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		sp.addNumber(3);
	}	
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		sp.addNumber(17);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		sp.addNumber(9);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		sp.addNumber(11);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
*/

	//	-----------------------------------------------

	int arr[] = {6, 3, 17, 9, 11};

	try {
		sp.addNumber(arr, arr + sizeof(arr) / sizeof(arr[0]));
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
	std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}

