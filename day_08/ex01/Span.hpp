# ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	private:
		std::vector<int> vec;
		unsigned int _size;

	public:
		// Orthodox Canonical Form
		Span();
		Span(unsigned int N);
		~Span();

		Span(const Span& instance);
		Span& operator=(const Span& instance);

		// member fct
		void addNumber(int num);
		int	shortestSpan();
		int longestSpan();

		// member function to add many numbers to you Span in one call
		template <typename T>
		void	addNumber(T b, T e) {
			while (b != e)
				addNumber(*b++);
		}

		// Exceptions
		class MyException1 : public std::exception {
			const char* what() const throw();
		};

		class MyException2 : public std::exception {
			const char* what() const throw();
		};

};


#endif
