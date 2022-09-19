#pragma once
#include <iostream>
using namespace std;

void print(int* pArray, int length);

//demo array instanciation
void demoArrayInstanciation1()
{
	int years[4]; //declare
	years[0] = 2019; //initialize
	years[1] = 1989;
	years[2] = 2015;
	years[3] = 2001;
}
void demoArrayInstanciation2()
{
	//we CANNOT dynamically dimension an array using this approach
	//int dimension = 0;
	//cout << "How many years do you want?";
	//cin >> dimension;
	//int years[dimension] = { 2019,1989,2015,2001 };

	int years[4] = { 2019,1989,2015,2001 };
	years[2] = 2016;
	cout << years[2] << endl;
}

void demoArrayInstanciation3()
{
	int dimension = 0;
	cout << "How many years do you want?";
	cin >> dimension;
	int* pArray = new int[dimension]; //get a pointer to 4 spaces
	
	//pArray is just the address of the first integer in array
	cout << pArray << endl;

	for (int i = 0; i < dimension; i++)
	{
		cout << "enter year " << i << endl;
		cin >> pArray[i];
	}

	//call our new print function
	print(pArray, dimension);

	delete[] pArray; //free space
}

void print(int *pArray, int length)
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













