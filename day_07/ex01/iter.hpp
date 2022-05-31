# ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T* arr, int length, void (*invoke) (T));

template <typename T>
void	invoke(T a);

#endif
