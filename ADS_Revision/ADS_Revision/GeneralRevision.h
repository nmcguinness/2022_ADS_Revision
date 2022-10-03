#pragma once

/// Revision Exercises - function definition, invocation, try...catch

using namespace std;

/// @brief adds two numbers - demo of function defition
/// @param x integer
/// @param y integer
/// @return sum of two integers, x and y
int add(int x, int y)
{
	return x + y;
}

/// @brief divide two floats and return result
/// @param x floating-point value
/// @param y  floating-point value
/// @return  floating-point result of x/y
/// @throw invalid_argument if y == 0
double divide(double x, double y)
{
	if (y == 0) throw invalid_argument("Invalid denominator!");
	/* if (y == 0)
		 throw "Invalid denominator!";*/
		 /*   if (y == 0)
				return 0;*/
	return x / y;
}

/******************************** Four ways to (try to) swap two integers ********************************/
//Pass-by-value for integers (x and y) means we pass a copy of these values, so the swap does not work
void swap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

//Pass-by-value for pointers to integers (x and y) means we pass a copy of these values, so the swap does not work
void swap_ptr(int* pX, int* pY)
{
	int* pTemp = pX;
	pX = pY;
	pY = pTemp;
}

//Pass-by-reference for integers (x and y) means we pass a reference to these values, so the swap works
void swap_ref(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

//Pass-by-reference for pointers to integers (x and y) means we pass a reference to these values, so the swap works
void swap_ref_to_ptr(int*& x, int*& y) {
	int* temp = x;
	x = y;
	y = temp;
}