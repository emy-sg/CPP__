#include "main.hpp"

int main() {
	Data a;
	std::cout << &a << std::endl;
	
	uintptr_t aptr = serialize(&a);
	std::cout << aptr << std::endl;
	
	Data *b = deserialize(aptr);
	std::cout << b << std::endl;
	return (0);
}
