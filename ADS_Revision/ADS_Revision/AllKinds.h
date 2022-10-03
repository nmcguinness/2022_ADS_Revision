#pragma once
#include <ostream>
using namespace std;

class AllKinds {
private:
	int x;  //4 bytes
	long y; //8 bytes
	float z;//4 bytes

public:
	AllKinds();
	AllKinds(int x, long y, float z);

	int getX() const { return this->x; }
	int getY() const { return this->y; }
	int getZ() const { return this->z; }
	void setX(int value) { this->x = value; }

	//==, !=, +, +=

	friend ostream& operator<<(ostream& out, const AllKinds& allKinds);
};
