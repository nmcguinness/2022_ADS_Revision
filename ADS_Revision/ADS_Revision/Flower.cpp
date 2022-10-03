#include "Flower.h"
#include "utilities.h"

//question 3
ostream& operator<<(ostream& out, const Flower& flower) {
	out << flower.name;
	cout << ",";
	out << flower.petals;
	cout << ",";
	out << flower.price;
	return out;
}

//question 4
//f1 + 1, f1 + 3.4
void Flower::operator+(double delta) {
	this->price += delta;
}

//question 5
//pre-increment(++x)
void Flower::operator++() {
	this->petals++;
}

//post-increment (x++)
void Flower::operator++(int x) {
	this->petals++;
}

void Flower::operator+=(double delta)
{
	this->price += delta;
}

bool Flower::operator!=(const Flower& other)
{
	//we can do something smarter (see line 42)
	//return !(this->name == other.getName()
	//	&& this->price == other.getPrice());

	//Remember that "this" is a pointer, so if we dereference (*) then we can access the object
	return !(*this == other);
}

bool Flower::operator==(const Flower& other)
{
	//Note even though this is a more effective solution we
	//are not fans of global constants - ESPSILON
	return this->name == other.getName()
		&& equalsWithin(this->price, other.getPrice(), EPSILON);
}

string Flower::getName() const {
	return this->name;
}
int Flower::getPetals() const
{
	return this->petals;
}
double Flower::getPrice() const {
	return this->price;
}

//Flower::Flower() : name(""), petals(0), price(0) {}
Flower::Flower() {
	//(*this).name = "";
	this->name = "";
	this->petals = 0;
	this->price = 0;
}

//Flower::Flower(string name, int petals, double price) :
//	name(name), petals(petals), price(price) {}

Flower::Flower(string name, int petals, double price) {
	this->name = name;
	this->petals = petals;
	this->price = price;
}