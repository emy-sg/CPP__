#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

/*int main(void) {
	Fixed a;

	std::cout << a.getRawBits() << std::endl;
	//Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
*/
	/*std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	*/

/*	Fixed b(10);

	std::cout << b.getRawBits() << std::endl;
	Fixed c;

	c = a + b;
*/
	//std::cout << c.getRawBits() << std::endl;
//	std::cout << c << std::endl;
	//std::cout << c << std::endl;
	//std::cout << b << std::endl;
	//std::cout << Fixed::max( a, b ) << std::endl;

/*int main() {
	Fixed a(1), b(10), c, d, e, f;

	c = a + b;
	std::cout << c << std::endl;

	d = a - b;
	std::cout << d << std::endl;

	e = a * b;
	std::cout << e << std::endl;

	f = a / b;
	std::cout << f << std::endl;
return (0);
}*/

//int main() {
	//Fixed a(0), b(2), c, d, e, f; // work just fine

	//Fixed a((float)0.5), b(2), c, d, e, f;  // but not this, especially *, /

	/*c = a + b;
	std::cout << c<< std::endl;

	d = a - b;
	std::cout << d << std::endl;

	e = a * b;
	std::cout << e << std::endl;

	f = a / b;
	std::cout << f << std::endl;
	*/

	/*Fixed a(0);
	std::cout << a << std::endl;
	a++;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;

	Fixed b(0);
	std::cout << b << std::endl;
	++b;
	std::cout << b << std::endl;
	std::cout << ++b << std::endl;
	*/
/*
	const Fixed a(5), b(6);
	 std::cout << Fixed::min(a, b) << std::endl;
	Fixed c((float)5.9), d((float)4.9);
	 std::cout << Fixed::max(c, d) << std::endl;
*/
//}
