#pragma once
#include <iostream>
//#include <stdexcept>
using namespace std;

void print(int* pArray, int length);
void randomize(int* pArray, int length);

void print(int* pArray, int length)
{
	if (pArray == nullptr)
		throw invalid_argument("pArray cannot be null!");

	for (int i = 0; i < length; i++)
		cout << pArray[i] << endl;
}

//randomize - takes ptr to array of ints and initializes
//using the c++ random function using rand()
void randomize(int* pArray, int length)
{
	if (pArray == nullptr)
		throw invalid_argument("pArray cannot be null!");

	for (int i = 0; i < length; i++)
	{
		pArray[i] = rand();
	}
}

//declare array, initialize to default, return address of 1st int
int* initialize(int length, int defaultValue)
{
	int* pArray = new int[length];
	for (int i = 0; i < length; i++)
		pArray[i] = defaultValue;
	return pArray;
}

//print an array of doubles in reverse order (print_reverse)
void print_reverse(double* pArray, int size)
{
	if (pArray == nullptr)
		throw invalid_argument("pArray cannot be null!");

	//start at size-1, go to 0
	for (int i = size - 1; i >= 0; i--)
		cout << pArray[i] << endl;
}
//compare two arrays of integers for equality, return true if same (compare)
int compare(int* pFirst, int lengthFirst, int* pSecond, int lengthSecond)
{
	if (pFirst == nullptr || pSecond == nullptr)
		throw invalid_argument("One or more array is null!");

	if (lengthFirst != lengthSecond)
		throw invalid_argument("Arrays are unequal in length!");

	for (int i = 0; i < lengthFirst; i++)
	{
		if (pFirst[i] != pSecond[i])
			return i;
	}
	return lengthFirst;
}

//compare two arrays of ints to see if they are reverse of one another
bool compare_reverse(int* pFirst, int lengthFirst, int* pSecond, int lengthSecond)
{
	//check for nullptr
	if (pFirst == nullptr || pSecond == nullptr)
		throw invalid_argument("One or more array is null!");

	//check for non-equal lengths
	if (lengthFirst != lengthSecond)
		throw invalid_argument("Arrays are unequal in length!");

	//read up on first, read down on second
	for (int i = 0; i < lengthFirst; i++)
	{
		if (pFirst[i] != pSecond[lengthFirst - 1 - i])
			return false;
	}
	return true;
}

//concat two arrays of same type
int* concat(int* pFirst, int lengthFirst, int* pSecond, int lengthSecond)
{
	//check for nullptr
	//make a new array - of what size?
	//add pFirst to new array
	//add pSecond to new array
	//return new array address
	return nullptr;
}
