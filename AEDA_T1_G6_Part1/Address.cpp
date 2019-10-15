#include "Address.h"

Address::Address() {

}

Address::Address(string tn, string dstr, string str, unsigned int numb, int flr = -1)
{
	town = tn;
	district = dstr;
	street = str;
	number = numb;
	floor = flr;
}

Address::Address(string str) //Implementar depois
{

}

Address::~Address() {

}

void Address::setTown(string cidade)
{
	town = cidade;
}

void Address::setDistrict(string distrito)
{
	district = distrito;
}

void Address::setStreet(string rua)
{
	street = rua;
}

void Address::setNumber(unsigned int n)
{
	number = n;
}

void Address::setFloor(int flr = -1)
{
	floor = flr;
}

string Address::get_town() const
{
	return town;
}

string Address::get_district() const
{
	return district;
}

string Address::get_street() const
{
	return street;
}

unsigned int Address::get_number() const
{
	return number;
}

int Address::get_floor() const
{
	return floor;
}

std::ostream & operator<<(std::ostream & stream, Address address) {
	// IN PROGRESS
	stream << "Town: " << address.town;
	stream << "District: " << address.district;
	stream << "Street: " << address.street;
	stream << "Number: " << address.number;
}