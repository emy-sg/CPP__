#include "Span.hpp"

Span::Span() {
	std::cout << "Default Constructor" << std::endl;
	// no  need to initialze a vector empty, it already call he is defaut constructor
	_size = 0;
}

Span::Span(unsigned int N) {
	std::cout << "Parameterized Constructor" << std::endl;
	// how to allocate a vector 
	vec.reserve(N);
	_size = N;
}

Span::~Span() {
	std::cout << "Default Destructor" << std::endl;
}

Span::Span(const Span& instance) {
	std::cout << "Copy Constructor" << std::endl;
	*this = instance;
}

Span& Span::operator=(const Span& instance) {
	std::cout << "Copy Assignement operator" << std::endl;
	_size = instance._size;

	// how to allocate the vector and fill it with the instance values
	vec.reserve(_size);

	// how to initialize a vector from another vector
	//   ==> https://www.geeksforgeeks.org/ways-copy-vector-c/
	// Using assignement operator to copy one vector to other : method 2
	vec = instance.vec;
	
	return *this;
}

/*
	Vector::size() in C++ STL
			https://www.geeksforgeeks.org/vectorempty-vectorsize-c-stl/
*/

void	Span::addNumber(int num) {
	if (vec.size() >=  _size)
		throw (MyException1());
	else
		//vec[vec.size()] = num;  // doesn't work
		//std::cout << vec[vec.size()] << std::endl;

		vec.push_back(num);
}

/*
	How to find the maximum element of a vector using STL in C++
		https://www.geeksforgeeks.org/how-to-find-the-maximum-element-of-a-vector-using-stl-in-c/
*/

int	Span::longestSpan() {
	if (vec.size() > 1)
		return (*max_element(vec.begin(), vec.end()) - *min_element(vec.begin(), vec.end()));
	else
		throw(MyException2());
}

/*
	Sorting a Vector in C++
			https://www.geeksforgeeks.org/sorting-a-vector-in-c/
*/

int	Span::shortestSpan() {
	if (vec.size() > 1)
	{
		int minDiff;
		int diff;

		std::sort(vec.begin(), vec.end());
		minDiff = vec[1] - vec[0];
		int i = 1;
		while (i < vec.size() && (i + 1) < vec.size())
		{
			diff = vec[i + 1] - vec[i];
			if (diff < minDiff)
				minDiff = diff;
			i++;
		}
		return (minDiff);
	}
	else
		throw(MyException2());
}

// Exceptions:

const char* Span::MyException1::what() const throw () {
	return "Can't add a more new element";
}

const char* Span::MyException2::what() const throw () {
	return "No span can be found";
}

