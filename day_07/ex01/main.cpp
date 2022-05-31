#include "iter.hpp"

/* Ressource:
 
	1-  How to pass a function as a parameter in C++
		https://www.geeksforgeeks.org/passing-a-function-as-a-parameter-in-cpp/

	2- How to find the length of an array in C++	
		https://www.educative.io/edpresso/how-to-find-the-length-of-an-array-in-cpp
*/

//	----------------------------------------------------------

 /*
				1-	There is 3 ways to pass a fct as an argument in C++:

		https://www.geeksforgeeks.org/passing-a-function-as-a-parameter-in-cpp/

	==> But the one valide in C++98 and also used in C, is passing the address of a function.

	Example:

		#include <iostream>

		template <typename T>

		T add(T a, T b) {
			return a + b;
		}

		template <typename T>
		T multiply(T a, T b) {
			return a * b;
		}

		template <typename T>
		T invoke(T a, T b, T (*func)(T, T)) {
			return func(a, b);
		}

		int main() {
			std::cout << "Addition ";
			std::cout << invoke(10, 20, &add) << std::endl;

			std::cout << "Multiplication ";
			std::cout << invoke(10, 20, &multiply) << std::endl;

			return (0);
		}

*/


/*
					2-	Using "sizeof()" for length of an array

		https://www.educative.io/edpresso/how-to-find-the-length-of-an-array-in-cpp

	==> One way to find the "length of an array" is: "to divide the size of the array by the size of each element".
	==>	The buit-in "sizeof() operator" is used for this purpose.

	Example:
		int arr[] = {10, 20, 30, 40};
		int arrSize = sizeof(arr) / sizeof(arr[0]);
		cout << "The size of the array is: " << arrSize;
		return (0);
*/

//		---------------------------------------------------

template <typename T>
void	invoke(T a) {
	std::cout << a << " ";
}

template <typename T>
void	iter(T* arr, int length, void (*func) (T) ){
	int i = 0;
	while (i < length) {
		func(arr[i]);
		i++;
	}
	std::cout << std::endl;
}

int main() {
	int arr1[] = {1, 2, 5, 0};
	iter(arr1, sizeof(arr1)/sizeof(arr1[0]), &invoke);

	float arr2[] = {1.1, 0, 4.f, 8.99, 8.0};
	iter(arr2, sizeof(arr2)/sizeof(arr2[0]), &invoke);

	std::string arr3[] = {"Hello", "You"};
	iter(arr3, sizeof(arr3)/sizeof(arr3[0]), &invoke);
	
	return (0);
}
