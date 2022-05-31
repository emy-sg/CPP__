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
		


		// WARNING: Why declare this function const:

		// cuz in the min (const Fixed&, const Fixed&);
		// I should guarantie that the fct that i am gonna call inside the min() function, must be declared const.
		// Error: "this argument has type 'const Fixed', but method is not marked const"

		// overload operators:
		Fixed operator + (const Fixed&) const;
		Fixed operator - (const Fixed&) const;
		Fixed operator * (const Fixed&) const;
		Fixed operator / (const Fixed&) const;

		// > < >= <= == !=
		bool operator < (const Fixed&) const;
		bool operator > (const Fixed&) const;
		bool operator >= (const Fixed&) const;
		bool operator <= (const Fixed&) const;
		bool operator == (const Fixed&) const;
		bool operator != (const Fixed&) const;
			
		// pre-increment and post-increment
		Fixed operator++(); // pre-increment
		Fixed operator++(int); // post-increment
		// pre-decrement and post-decrement
		Fixed operator--(); // pre-increment
		Fixed operator--(int); // post-increment

		// new four public functions
		static Fixed& min(Fixed&, Fixed&);
		static Fixed const & min(const Fixed&, const Fixed&);   // const & : cuz i'm gonna return Fixed
		static Fixed& max(Fixed&, Fixed&);
		static Fixed const & max(const Fixed&, const Fixed&);	// const & : cuz i'm gonna return Fixed
};

std::ostream& operator<<(std::ostream &out, const Fixed& instance);

#endif
