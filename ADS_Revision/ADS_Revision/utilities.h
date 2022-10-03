#pragma once
using namespace std;

//global variable BUT we aren't a fan of global variables
const double EPSILON = 1E-4; //0.0001

/// @brief Compares two doubles to within EPSILON of precision
/// @param x
/// @param y
/// @param epsilon
/// @return
bool equalsWithin(double x, double y, double epsilon) {
	return (x - y) <= epsilon;
}
