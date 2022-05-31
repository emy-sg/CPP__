#include "Fixed.hpp"

const int Fixed::base = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	fixed_point = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& instance) {
	std::cout << "Copy constructor called" << std::endl;
	
	*this = instance;
		
		// OR
	
	//fixed_point = instance.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& instance) {
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point = instance.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	fixed_point = raw;
}
