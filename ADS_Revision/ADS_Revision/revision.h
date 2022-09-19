#pragma once

using namespace std;

//Revise function definition, invocation, try...catch
//reference and pointers

//function definition
int add(int x, int y)
{
    return x + y;
}

double divide(double x, double y)
{
    if (y == 0) throw invalid_argument("Invalid denominator!");
    /* if (y == 0)
         throw "Invalid denominator!";*/
         /*   if (y == 0)
                return 0;*/
    return x / y;
}

//three forms of swap
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}








