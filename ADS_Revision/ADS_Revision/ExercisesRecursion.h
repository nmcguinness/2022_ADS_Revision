#pragma once

/// @see https://2023-moodle.dkit.ie/mod/resource/view.php?id=191746
/// Revision Exercises - Selected Solutions - Recursion

#include <iostream>
#include <string>
using namespace std;

/// @brief Question 1 - determines if a string, s, is a palindrome
/// @param s string
/// @version 1.0
bool isPalindrome(string s)
{
	if (s.size() == 1 || s.size() == 0)
	{
		return true;
	}
	else
	{
		if (s[0] == s[s.size() - 1])
		{
			return isPalindrome(s.substr(1, s.size() - 2));
		}
		return false;
	}
}

/// @brief Question 2 - returns the minimum and maximum values in the given array.
/// @param arr a pointer to an array of integers
/// @param size the number of elements in the array
/// @param pos the current element
/// @param min placeholder for the lowest value
/// @param max placeholder for the highest value
/// @version 1.0

void getMinMax(int* arr, int size, int pos, int& min, int& max)
{
	if (pos == size)
		return;
	if (min > arr[pos])
	{
		min = arr[pos];
	}
	if (max < arr[pos])
	{
		max = arr[pos];
	}
	getMinMax(arr, size, pos + 1, min, max);
}

/// @brief Question 3 - reverses the given input string
/// @param s the string to reverse;
/// @version 1.0
string reverse(string s)
{
	if (s.size() > 0)
		return reverse(s.substr(1)) + s[0];
	return "";
}

/// @brief Question 4 - returns numerical value of the string given as an int.
/// @param s a number given as a string
/// @version 1.0
int getNumber(string s)
{
	if (s.size() > 0)
	{
		return getNumber(s.substr(0, s.size() - 1)) * 10 + (s[s.size() - 1] - '0');
	}
	return 0;
}

/// @brief Question 5 - finds 2 to the power of the given pow.
/// @param pow the power to find 2 to.
/// @version 1.0
int power(int pow)
{
	if (pow > 0)
		return 2 * power(pow - 1);
	return 1;
}