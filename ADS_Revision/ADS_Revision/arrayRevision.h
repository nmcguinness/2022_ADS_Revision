#pragma once
#include <iostream>
using namespace std;

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
	
	for (int i = 0; i < dimension; i++)
	{
		cout << "enter year " << i << endl;
		cin >> pArray[i];
	}

	for (int i = 0; i < dimension; i++)
	{
		cout << pArray[i] << endl;
	}

	delete[] pArray; //free space
}


