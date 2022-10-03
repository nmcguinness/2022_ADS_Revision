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
	long getY() const { return this->y; }
	float getZ() const { return this->z; }
	void setX(int value) { this->x = value; }

	//==, !=, +, +=
	bool operator==(const AllKinds& rhs);
	bool operator!=(const AllKinds& rhs);
	void operator+=(AllKinds rhs)
	{
		//a1 += a2;
		this->x += rhs.getX();
		this->y += rhs.getY();
		this->z += rhs.getZ();
	}
	AllKinds operator+(AllKinds rhs)
	{
		AllKinds sum;
		sum.x = this->x + rhs.getX();
		sum.y = this->y + rhs.getY();
		sum.z = this->z + rhs.getZ();
		return sum;
	}

	friend ostream& operator<<(ostream& out, const AllKinds& allKinds);
};
