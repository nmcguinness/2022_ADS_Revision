#include <iostream>
#include "revision.h"
#include "arrayRevision.h"

using namespace std;

//function declaration
//int add(int x, int y); //semi-colon
//double divide(double x, double y);

int main()
{
    //functions - add, divide
    cout << add(3, 4) << endl;
    try {
        cout << divide(3, 0) << endl;
    }
    catch (invalid_argument e) {
        cout << e.what() << endl;
    }
    catch (...) {
        cout << "A bad thing happened!";
    }

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

    demoArrayInstanciation3();

    //lets test out our print and randomize functions
    int* myData = new int[5]; 
    randomize(myData, 5);
    print(myData, 5);

    //lets create a function that returns an array
    int* myNewArray = initialize(5, 100);
    print(myNewArray, 5);
    delete[] myNewArray;
}

//declare array, initialize to default, return address of 1st int
int* initialize(int length, int defaultValue)
{
    int* pArray = new int[length];

    for (int i = 0; i < length; i++)
        pArray[i] = defaultValue;

    return pArray;
}





////function definition
//int add(int x, int y)
//{
//    return x + y;
//}
//
//double divide(double x, double y)
//{
//    if (y == 0) throw invalid_argument("Invalid denominator!");
//   /* if (y == 0)
//        throw "Invalid denominator!";*/
// /*   if (y == 0)
//        return 0;*/
//    return x / y;
//}





