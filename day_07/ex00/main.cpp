#include "whatever.hpp"

// Implement the following templates,
// 	The only requirement is that the "two arguments must have the same type and must support all the comparison operators".

template <typename T>
void swap(T& arg1, T& arg2) {
	T tmp;

	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template <typename T>
const T& min(const T& arg1, const T& arg2) {
	if (arg1 >= arg2)
		return (arg2);
	return (arg1);
}

template <typename T>
const T& max(const T& arg1, const T& arg2) {
	if (arg2 >= arg1)
		return (arg2);
	return (arg1);
}

int main(void) {
	/*int i=5, j= 9;
	std::cout << "i = " << i << " j = " << j << std::endl;
	swap(i, j);
	std::cout << "i = " << i << " j = " << j << std::endl;
	
	std::cout << "Min : " << std::endl;
	std::cout << min(i, j) << std::endl;

	std::cout << "Max : " << std::endl;
	std::cout << max(i, j) << std::endl;
	*/

	// ----------------------------------------

	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}
