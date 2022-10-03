#pragma once

/// /// @see https://2023-moodle.dkit.ie/mod/resource/view.php?id=191746
/// Revision Exercises - Selected Solutions - Pointer & Dynamic Memory

#include <stdexcept>

/// @brief Sums the values in an integer array
/// @param pArray Pointer to an int array
/// @param length Valid integer > 0
/// @return Integer sum of array contents
/// @see https://2023-moodle.dkit.ie/pluginfile.php/289280/mod_resource/content/0/C%2B%2B%20Revision.pdf
/// @throw invalid_argument
int getTotal(int* pArray, int length)
{
	if (pArray == nullptr || length <= 0)
		throw std::invalid_argument("pArray is null or length is invalid!");

	int sum = 0;

	//using "auto" at compile-time we replace with inferred type i.e. int
	for (auto i = 0; i < length; i++)
		sum += pArray[i];

	return sum;
}

template <typename T, typename S>
S getTotal(T* pArray, int length) {
	S sum = 0;
	for (auto i = 0; i < length; i++)
		sum += pArray[i];

	return sum;
}

//operators (e.g. ++, *, /) and operands (e.g. 5, 3, x, y)
//unary operators (e.g. ++, --)
//binary operators (e.g. +, %, - ,/)
//ternary operator (e.g. (boolean exp) ? <true> : <false>
int countEven(int* pArr, int length)
{
	int sum = 0;
	for (auto i = 0; i < length; i++)
	{
		//	sum += (pArr[i] % 2 == 0) ? 1 : 0; //ternary operator
		if (pArr[i] % 2 == 0)
			sum++;
	}
	return sum;
}

//int countIf(T* pArr, int length, function<T> filter)
