#include "AllKinds.h"
//#include "utilities.h"
//a short form of the constructor on line 6
//AllKinds::AllKinds() : x(0), y(0), z(0) {}

AllKinds::AllKinds()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

//a short form of the constructor on line 16
//AllKinds::AllKinds(int x, long y, float z) : x(x), y(y), z(z) {}

AllKinds::AllKinds(int x, long y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

bool AllKinds::operator==(const AllKinds& rhs)
{
	//under what conditions could this code give wrong answer?
	return this->x == rhs.getX()
		&& this->y == rhs.getY();
	//&& equalsWithin(this->z, rhs.getZ(), EPSILON);
}

bool AllKinds::operator!=(const AllKinds& rhs)
{
	//return this->x != rhs.getX()
	//	|| this->y != rhs.getY()
	//	|| !equalsWithin(this->z, rhs.getZ(), EPSILON);

	return !(*this == rhs);
}

ostream& operator<<(ostream& out, const AllKinds& allKinds)
{
	//const keyword protects from modification
	//allKinds.x = -100000;

	out << allKinds.x << "," << allKinds.y << "," << allKinds.z;

	return out;
}