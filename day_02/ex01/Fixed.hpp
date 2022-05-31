# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int fixed_point;
		static const int base;

	public:
		// Orthodox Canonical form
		Fixed();
		~Fixed();
		Fixed(const Fixed&);
		Fixed& operator=(const Fixed&);

		// new constructors
		Fixed(const int);
		Fixed(const float);

		// public member functions
		int getRawBits(void) const;
		void setRawBits(int const raw);

		// new member functions:
		float toFloat(void) const;
		int toInt(void) const;
		// Ressource: why this operator "<<" can not be overload inside a class (member functions)
		// 		https://www.geeksforgeeks.org/overloading-stream-insertion-operators-c/
		//friend std::ostream& operator<<(std::ostream &out, const Fixed&);
};

std::ostream& operator<<(std::ostream &out, const Fixed& instance);

#endif
