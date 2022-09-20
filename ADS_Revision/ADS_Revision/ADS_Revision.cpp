#include <iostream>
#include "revision.h"
#include "arrayRevision.h"
#include "ADS_Revision.h"

using namespace std;

//function declaration
void demoSimpleFunction();
void demoTryCatch();
void demoSwaps();
void demoArrayInstanciation1();
void demoArrayInstanciation2();
void demoArrayUsingPointer();
void demoArrayFunctions();

int main()
{
	//cout << endl << "demoSimpleFunction()..." << endl;
	//demoSimpleFunction();

	//cout << endl << "demoTryCatch()..." << endl;
	//demoTryCatch();

	//cout << endl << "demoSwaps()..." << endl;
	//demoSwaps();

	//cout << endl << "demoArrayUsingPointer()..." << endl;
	//demoArrayUsingPointer();

	//cout << endl << "demoArrayInstanciation1()..." << endl;
	//demoArrayInstanciation1();

	//cout << endl << "demoArrayInstanciation2()..." << endl;
	//demoArrayInstanciation2();

	cout << endl << "demoArrayFunctions()..." << endl;
	demoArrayFunctions();
}

void demoSimpleFunction()
{
	cout << add(3, 4) << endl;
}

void demoTryCatch()
{
	try {
		cout << divide(3, 0) << endl;
	}
	catch (invalid_argument e) {
		cout << e.what() << endl;
	}
	catch (...) {
		cout << "A bad thing happened!";
	}
}
void demoSwaps()
{
	//move functions into header
	//look at swap - ptrs, reference, refs to pointers

	//swapping using pass by copy
	int a = 10;
	int b = 100;
	swap(a, b);
	cout << "a:" << a << ",b:" << b << endl;

	//swapping using pass by reference
	a = 500;
	b = 9999;
	swap_ref(a, b);
	cout << "a:" << a << ",b:" << b << endl;

	a = 500;
	b = 9999;
	int* pA = &a;
	int* pB = &b;
	swap_ptr(pA, pB);
	cout << "pA:" << *pA << ",pB:" << *pB << endl;
}

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
	//cout << "How many years do you want to store?";
	//cin >> dimension;
	//int years[dimension] = { 2019,1989,2015,2001 };

	int years[4] = { 2019,1989,2015,2001 };
	years[2] = 2016;
	cout << years[2] << endl;
}

void demoArrayUsingPointer()
{
	int dimension = 0;
	cout << "How many years do you want to store?";
	cin >> dimension;
	int* pArray = new int[dimension]; //get a pointer to 4 spaces

	//pArray is just the address of the first integer in array
	cout << pArray << endl;

	for (int i = 0; i < dimension; i++)
	{
		cout << "Enter year:" << (i + 1) << endl;
		cin >> pArray[i];
	}

	//call our new print function
	print(pArray, dimension);

	delete[] pArray; //free space - otherwise memory leak!
}

void demoArrayFunctions()
{
	//lets test out our print and randomize functions
	int* myData = new int[5];
	randomize(myData, 5);
	print(myData, 5);

	//lets create a function that returns an array
	int* myNewArray = initialize(5, 100);
	print(myNewArray, 5);
	delete[] myNewArray;

	try {
		print(nullptr, 0);
	}
	catch (invalid_argument e)
	{
		cout << e.what() << endl;
	}
}