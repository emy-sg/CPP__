# ifndef THATEVER_HPP
#define THATEVER_HPP

#include <iostream>

// Function Template in CPP
template <typename T>

// swap the values of two given arguments, and does not return anything
void	swap(T& arg1, T& arg2);

// min compares the two values passed in its arguments and return the smallest one.
// ==> If the two of them are equal, then it returns the second one.
template <typename T>
const T& min(const T& arg1, const T& arg2);

// max compares the two values passed in its arguments and returns the greatest one.
// ==> If the two of them are equal, then it returns the second one.
template <typename T>
const T& max(const T& arg1, const T& arg2);

#endif
