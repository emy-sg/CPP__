# ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm> // std::find 
// std::find ==> https://www.cplusplus.com/reference/algorithm/find/

struct Myexception : public std::exception {
	const char* what() const throw();
};

template <typename T>
void	easyfind(std::vector<T> arr, int num) {
	std::vector<int>::iterator iter;

	iter = std::find(arr.begin(), arr.end(), num);
	if (iter != arr.end()) {
		std::cout << "The position of the first occurence of this element " << num << " is: " ;
		std::cout << iter - arr.begin() << std::endl;
	}
	else
		throw(Myexception());
}

// You can define your own exception by inheriting and 
//   overriding exception class functionality.


#endif
