#pragma once
#include <iostream>
using namespace std;

void print(int* pArray, int length);
void randomize(int* pArray, int length);

void print(int* pArray, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << pArray[i] << endl;
	}
}

//randomize - takes ptr to array of ints and initializes
//using the c++ random function using rand()
void randomize(int* pArray, int length)
{
	for (int i = 0; i < length; i++)
	{
		pArray[i] = rand();
	}
}
