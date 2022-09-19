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





