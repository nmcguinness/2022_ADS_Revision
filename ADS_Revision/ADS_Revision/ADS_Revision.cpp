/// @brief Revision Exercises and Selected Solutions

#include <iostream>
#include "ADS_Revision.h"

//header files for general revision
#include "GeneralRevision.h"
#include "GeneralArrayRevision.h"

//header files for exercise solutions
#include "ExercisesRecursion.h"
#include "ExercisesPointersMemory.h"
#include "Flower.h"
#include "AllKinds.h"

//using this for function<>
#include <functional>

using namespace std;

/************************** Revision - Functions & Arrays ******************************/

void demoSimpleFunction();
void demoTryCatch();
void demoSwaps();
void demoArrayInstanciation1();
void demoArrayInstanciation2();
void demoArrayUsingPointer();
void demoArrayFunctions();
void demoArrayCompare();
void demoArrayPrintReverse();
void demoArrayCompareReverse();
void demoArrayConcat();

/************************** Revision - Pointers & Dynamic Memory ******************************/

void exerciseGetTotal();
void exerciseGetTotalGeneric();
void exerciseGetMaximum();

/************************** Revision - Classes & Operator Overloading ******************************/
void exerciseClassesQuestion1();
void exerciseClassesQuestion2();
void exerciseClassesQuestion3();
void classesQuestion4();
void exerciseClassesQuestion5();
void exerciseClassesTestingExtraOperators();

/************************** Advanced - Not Included in Exercises - Using function<> class wrapper ******************************/

void demoUsingFunctionClassWrapper();
void demoUsingFunctionAsParameter();
void demoUsingLambdaAsParameter();
void demoUsingLambdaWithCaptureClause();

int main()
{
	cout << endl << "/************************** Revision - Functions & Arrays ******************************/" << endl;

	cout << endl << "demoSimpleFunction()..." << endl;
	demoSimpleFunction();

	cout << endl << "demoTryCatch()..." << endl;
	demoTryCatch();

	cout << endl << "demoSwaps()..." << endl;
	demoSwaps();

	cout << endl << "demoArrayUsingPointer()..." << endl;
	demoArrayUsingPointer();

	cout << endl << "demoArrayInstanciation1()..." << endl;
	demoArrayInstanciation1();

	cout << endl << "demoArrayInstanciation2()..." << endl;
	demoArrayInstanciation2();

	cout << endl << "demoArrayFunctions()..." << endl;
	demoArrayFunctions();

	cout << endl << "demoArrayCompare()..." << endl;
	demoArrayCompare();

	cout << endl << "demoArrayPrintReverse()..." << endl;
	demoArrayPrintReverse();

	cout << endl << "demoArrayCompareReverse()..." << endl;
	demoArrayCompareReverse();

	cout << endl << "demoArrayConcat()..." << endl;
	demoArrayConcat();

	cout << endl << "/************************** Revision - Pointers & Dynamic Memory ******************************/" << endl;

	cout << endl << "demoGetTotal()..." << endl;
	exerciseGetTotal();

	cout << endl << "demoGetTotalGeneric()..." << endl;
	exerciseGetTotalGeneric();

	cout << endl << "exerciseGetMaximum()..." << endl;
	exerciseGetMaximum();

	cout << endl << "/************************** Revision - Classes & Operator Overloading ******************************/" << endl;

	cout << endl << "exerciseClassesQuestion1()..." << endl;
	exerciseClassesQuestion1();

	cout << endl << "exerciseClassesQuestion2()..." << endl;
	exerciseClassesQuestion2();

	cout << endl << "exerciseClassesQuestion3()..." << endl;
	exerciseClassesQuestion3();

	cout << endl << "classesQuestion4()..." << endl;
	classesQuestion4();

	cout << endl << "exerciseClassesQuestion5()..." << endl;
	exerciseClassesQuestion5();

	cout << endl << "exerciseClassesTestingExtras()..." << endl;
	exerciseClassesTestingExtraOperators();

	cout << endl << "/************************** Revision - Classes & Operator Overloading ******************************/" << endl;

	cout << endl << "demoUsingFunctionClassWrapper()..." << endl;
	demoUsingFunctionClassWrapper();

	cout << endl << "demoUsingFunctionAsParameter()..." << endl;
	demoUsingFunctionAsParameter();

	cout << endl << "demoUsingLambdaAsParameter()..." << endl;
	demoUsingLambdaAsParameter();

	cout << endl << "demoUsingLambdaWithCaptureClause()..." << endl;
	demoUsingLambdaWithCaptureClause();
}

/************************** Revision - Functions & Arrays ******************************/

void demoArrayPrintReverse()
{
	double* pArray = new double[3]; //get a pointer to first space in an array of 3 doubles
	pArray[0] = 1.45;
	pArray[1] = 12.56;
	pArray[2] = 111.6;
	print_reverse(pArray, 3);

	delete[] pArray;
}

void demoArrayCompareReverse()
{
	int* pArray1 = new int[3];
	pArray1[0] = 1;
	pArray1[1] = 12;
	pArray1[2] = 111;

	int* pArray2 = new int[3];
	pArray2[0] = 111;
	pArray2[1] = 12;
	pArray2[2] = 1;

	cout << "compare reverse: " << compare_reverse(pArray1, 3, pArray2, 3) << endl;

	delete[] pArray1;
	delete[] pArray2;

	//print a space to separate output
	cout << endl;

	/**************************/
	int* pArray3 = new int[3];
	pArray3[0] = 1;
	pArray3[1] = 12;
	pArray3[2] = 111;

	int* pArray4 = new int[3];
	pArray4[0] = 9999999;
	pArray4[1] = 12;
	pArray4[2] = 1;

	cout << "compare reverse: " << compare_reverse(pArray3, 3, pArray4, 3) << endl;

	delete[] pArray3;
	delete[] pArray4;
}

void demoArrayConcat()
{
	int* pArray1 = new int[3];
	pArray1[0] = 1;
	pArray1[1] = 2;
	pArray1[2] = 3;

	int* pArray2 = new int[5];
	pArray2[0] = 15;
	pArray2[1] = 20;
	pArray2[2] = 25;
	pArray2[3] = 30;
	pArray2[4] = 35;

	int* resultArr1 = concat(pArray1, 3, pArray2, 5);
	print(resultArr1, 8);

	delete[] pArray1;
	delete[] pArray2;
	delete[] resultArr1;

	//print a space to separate output
	cout << endl;

	/**************************/

	int* pArray3 = new int[4];
	pArray3[0] = 11;
	pArray3[1] = 22;
	pArray3[2] = 33;
	pArray3[3] = 44;

	int* pArray4 = new int[7];
	pArray4[0] = 10;
	pArray4[1] = 20;
	pArray4[2] = 30;
	pArray4[3] = 40;
	pArray4[4] = 50;
	pArray4[5] = 60;
	pArray4[6] = 70;

	int* resultArr2 = concat(pArray3, 4, pArray4, 7);
	print(resultArr2, 11);

	delete[] pArray3;
	delete[] pArray4;
	delete[] resultArr2;
}

void demoArrayCompare()
{
	int dimension = 3;
	int* pArray1 = new int[dimension];
	pArray1[0] = 10; pArray1[1] = 100; pArray1[2] = 1000;

	int* pArray2 = new int[dimension];
	pArray2[0] = 10; pArray2[1] = 100; pArray2[2] = 1000;

	int result = compare(pArray1, dimension, pArray2, dimension);

	if (result == dimension)
		cout << "No difference exists in the two arrays" << endl;
	else
		cout << "Arrays are different at index " << result << endl;

	delete[] pArray1;
	delete[] pArray2;
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

	//string dow[7] = { "m",.. };

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

	delete[] myData;
	delete[] myNewArray;

	try {
		print(nullptr, 0);
	}
	catch (invalid_argument e)
	{
		cout << e.what() << endl;
	}
}

/************************** Revision - Pointers & Dynamic Memory ******************************/

void exerciseGetTotal()
{
	int* pArray = new int[3]; //get a pointer to first space in an array of 3 ints
	pArray[0] = 10;
	pArray[1] = 20;
	pArray[2] = 30;

	int sum = getTotal(pArray, 3);
	cout << "sum is " << sum << endl;

	delete[] pArray;
}

void exerciseGetTotalGeneric()
{
	double* pArray = new double[3]; //get a pointer to first space in an array of 3 doubles
	pArray[0] = 10.2;
	pArray[1] = 20.1;
	pArray[2] = 30.3;

	double sum = getTotal<double, double>(pArray, 3);
	cout << "sum is " << sum << endl;

	int* pArray2 = new int[3];
	pArray2[0] = 111;
	pArray2[1] = 12;
	pArray2[2] = 1;

	sum = getTotal<int, int>(pArray2, 3);
	cout << "sum is " << sum << endl;

	delete[] pArray;
	delete[] pArray2;
}

void exerciseCountEven()
{
	int* myArr = new int[5];
	myArr[0] = 12; myArr[1] = 3; myArr[2] = 6;
	myArr[3] = 11; myArr[4] = 4;

	int count = countEven(myArr, 5);
	cout << "Nr even numbers: " << count << endl;

	delete[] myArr;
}

/// @brief Note I have changed this question to return a DOUBLE maximum and NOT a pointer to a DOUBLE
void exerciseGetMaximum()
{
	double* myArr = new double[4];
	myArr[0] = -100;	myArr[1] = 2000;
	myArr[2] = 6.6;		myArr[3] = 121.5;

	double max = getMaximum(myArr, 4);
	cout << "value of max: " << max << endl;

	delete[] myArr;
}

/************************** Revision - Classes & Operator Overloading ******************************/

void exerciseClassesQuestion1() {
	cout << endl;
	AllKinds a1(1, 2, 3);
	AllKinds a2(1, 2, 3);

	if (a1 == a2)
		cout << "a1 and a2 are the same!" << endl;

	a1 += a2;
	cout << "new a1 is" << a1 << endl;
}

void exerciseClassesQuestion2() {
	cout << endl;
	Flower f1("petunia", 4, 1.50);
	cout << f1.getName() << "," << f1.getPrice() << endl;
}

void exerciseClassesQuestion3() {
	cout << endl;
	Flower f1("petunia", 4, 1.50);
	Flower f2("lily", 8, 4.50);
	cout << f1 << "," << f2 << endl;
}

void classesQuestion4() {
	cout << endl;
	Flower f1("petunia", 4, 1.50);
	cout << f1 << endl;
	f1 + 50;
	cout << f1 << endl;
}

void exerciseClassesQuestion5() {
	cout << endl;
	Flower f1("petunia", 4, 1.50);
	cout << f1 << endl;
	f1++;
	cout << f1 << endl;
}

void exerciseClassesTestingExtraOperators()
{
	Flower f1("petunia", 4, 1.50);
	cout << f1 << endl;
	f1 += 10;
	cout << f1 << endl;
}

/************************** Advanced - Not Included in Exercises - Using function<> class wrapper ******************************/

/// @brief Returns true if x is even, otherwise odd
/// @param x
/// @return
bool isEven(int x) { return x % 2 == 0; }

/// @brief Returns a^b
/// @param a
/// @param b
/// @return
double myPower(double a, double b) { return pow(a, b); }

/// @brief Returns product of two doubles
/// @param x
/// @param y
/// @return Product of the two doubles
double multiply(double x, double y) { return x * y; }

/// @brief Returns true if x is within a HARD-CODED range of values :( We don't like hardcoded functions
/// @param x
/// @return
bool isWithin(int x) { return (x >= 10 && x <= 20); }

/// @brief Demos use of the function<> class wrapper
/// @see https://en.cppreference.com/w/cpp/utility/functional/function
void demoUsingFunctionClassWrapper()
{
	//declaring a variable which will store addr of a function (takes int, returns bool)
	function<bool(int)> myFunc;

	//assigning the address (in RAM) of the function isEven to this variable
	myFunc = isEven;

	//now we can call the isEven function using myFunc
	cout << myFunc(13) << endl;

	function<double(double, double)> arithFunc = myPower;
	cout << arithFunc(2, 3) << endl; //8

	arithFunc = multiply;
	cout << arithFunc(2, 3) << endl;  //6
}

/// @brief Demo use of the function<> class wrapper as a parameter to countIf
void demoUsingFunctionAsParameter()
{
	//make an array
	int* ages = new int[6];
	ages[0] = 19; ages[1] = 24; ages[2] = 24;
	ages[3] = 36; ages[4] = 31; ages[5] = 17;

	function<bool(int)> f = isEven;
	int count = countIf(ages, 6, f);
	cout << count << " numbers matched isEven filter!" << endl;

	f = isWithin;
	count = countIf(ages, 6, f);
	cout << count << " numbers matched isWithin filter!" << endl;

	//release the array to the garbage collector
	delete[] ages;
}

/// @brief Demo replacing the hard-coded function (e.g. isEven, isWithin) with a lambda expression
/// @see https://www.programiz.com/cpp-programming/lambda-expression
/// @see https://www.geeksforgeeks.org/lambda-expression-in-c/
void demoUsingLambdaAsParameter()
{
	//make an array
	int* ages = new int[6];
	ages[0] = 19; ages[1] = 24; ages[2] = 24;
	ages[3] = 36; ages[4] = 31; ages[5] = 17;

	function<bool(int)> pred = [](int x) { return x % 2 == 0; };

	int count = countIf(ages, 6, pred);
	cout << count << " numbers matched lambda filter!" << endl;

	//release the array to the garbage collector
	delete[] ages;
}

/// @brief Demo passing parameters into a lambda (i.e. lo, hi) through the [capture clause]
/// @see https://www.programiz.com/cpp-programming/lambda-expression
/// @see https://www.geeksforgeeks.org/lambda-expression-in-c/
void demoUsingLambdaWithCaptureClause()
{
	//make an array
	int* ages = new int[6];
	ages[0] = 19; ages[1] = 24; ages[2] = 24;
	ages[3] = 36; ages[4] = 31; ages[5] = 17;

	//notice how we can pass lo and hi in through the [] - called the capture clause
	int lo = 20;
	int hi = 30;
	function<bool(int)> pred = [lo, hi](int x) { return (x >= lo && x <= hi);	};

	int count = countIf(ages, 6, pred);
	cout << count << " numbers matched lambda filter!" << endl;

	//release the array to the garbage collector
	delete[] ages;
}

/************************** Advanced - Not Included in Exercises - Explaining a predicate vs an action ******************************/

//Predicate is a function that takes 1 parameter and returns a bool (e.g. IsEven, IsWithin)
bool isEmailValid(string email)
{
	//check the email
	return true;
}
//Action is a function that takes N parameters and returns void (e.g. print)
void playSound(int duration, float frequency)
{
	//	BEEP(frequency, duration);
}