#include <iostream>
#include "revision.h"

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





