# ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

struct Data {
	int	i;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
