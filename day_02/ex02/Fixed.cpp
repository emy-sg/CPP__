#include "Fixed.hpp"

const int Fixed::base = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	fixed_point = 0;
}

Fixed::Fixed(const int i) {
	std::cout << "Int constructor called" << std::endl;
	fixed_point = i << base;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	fixed_point = roundf(f * (1 << base));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& instance) {
	std::cout << "Copy constructor called" << std::endl;

	*this = instance; // copy assignment operator
	
		// OR

	//fixed_point = instance.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& instance) {
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_point = instance.fixed_point;
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

int Fixed::toInt(void) const {
	return (fixed_point >> base);
}

float Fixed::toFloat(void) const {
	// return (fixed_point * ( 1 >> base)); // won't work cuz (1 >> 8 ===> 0)
	// so instead of (fixed_point * (1>>base)), we use (fixed_point / (2^8)) OR (fixed_point / (1 << base))
	return ((float)fixed_point / (1 << base));
}

std::ostream& operator<<(std::ostream &out, const Fixed& instance) {
	out << instance.toFloat();
	return out;
}

//    --------------------------------------------------------------


Fixed Fixed::operator+(const Fixed& right) const {
	Fixed ret;
	ret.fixed_point = this->fixed_point + right.fixed_point;
	return (ret);
}

Fixed Fixed::operator-(const Fixed& right) const {
	Fixed ret;
	ret.fixed_point = this->fixed_point - right.fixed_point;
	return (ret);
}

Fixed Fixed::operator*(const Fixed& right) const {
	Fixed ret(this->toFloat() * right.toFloat());
	return (ret);
}

Fixed Fixed::operator/(const Fixed& right) const {
	Fixed ret(this->toFloat() / right.toFloat());
	return (ret);
}

// -----------------------------------------------------

bool Fixed::operator < (const Fixed& right) const {
	if (this->fixed_point < right.fixed_point)
		return true;
	return false;
}

bool Fixed::operator > (const Fixed& right) const {
	if (this->fixed_point > right.fixed_point)
		return true;
	return false;
}

bool Fixed::operator <= (const Fixed& right) const {
	if (this->fixed_point <= right.fixed_point)
		return true;
	return false;
}

bool Fixed::operator >= (const Fixed& right) const {
	if (this->fixed_point >= right.fixed_point)
		return true;
	return false;
}

bool Fixed::operator == (const Fixed& right) const {
	if (this->fixed_point == right.fixed_point)
		return true;
	return false;
}

bool Fixed::operator != (const Fixed& right) const {
	if (this->fixed_point != right.fixed_point)
		return true;
	return false;
}

//  -------------------------------

Fixed Fixed::operator++(){
	++fixed_point;
	return(*this);
}

Fixed Fixed::operator++(int) {
	Fixed post;
	
	post = *this;
	++fixed_point;
	return(post);
}

Fixed Fixed::operator--(){
	--fixed_point;
	return(*this);
}

Fixed Fixed::operator--(int) {
	Fixed post;
	
	post = *this;
	--fixed_point;
	return(post);
}

//  ----------------------------------------------

Fixed& Fixed::min(Fixed& left, Fixed& right) {
	if (left <= right)
		return (left);
	return (right);
};

Fixed const & Fixed::min(const Fixed& left, const Fixed& right) {
	if (left <= right)
		return (left);
	return (right);
};

Fixed& Fixed::max(Fixed& left, Fixed& right) {
	if (left >= right)
		return (left);
	return (right);
};

Fixed const & Fixed::max(const Fixed& left, const Fixed& right) {

	if (left >= right)
		return (left);
	return (right);
};

