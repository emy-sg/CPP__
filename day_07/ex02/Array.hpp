# ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	private:
		T *arr;
		unsigned int _size;

	public:
		// Construction with no parameter, creates an empty array
		Array();

		// Construction with an "unsigned int" as parameter.
		//  Creates an array of n elements initialized by default.
		Array(unsigned int n);

		// Destructor
		//   Should delete the allocation memory
		~Array();

		Array(const Array& instance);
		Array& operator=(const Array& instance);


		// member function
		int	size() const;

		// Array<int> does not provide a subscript operator[]
		T operator[](unsigned int i);

		class MyException : public std::exception {
			const char* what() const throw();
		};
};


/* Why ".tpp":
 		https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file
*/

#include "Array.tpp"

#endif
