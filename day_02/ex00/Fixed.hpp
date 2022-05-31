# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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

		// return la valeur de fixed_point
		int getRawBits(void) const;

		// set la valeur du fixed_point
		void setRawBits(int const raw);
};

#endif
