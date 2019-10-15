#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include <string>
using namespace std;

class Coords {
	double latitude;
	double longitude;
};

class Address {
	string town;
	string district;
	string street;
	unsigned int number;
	int floor; //if non-aplicable, =-1

public:
	Address();
	Address(string str);
	Address(string tn,string dstr,string str, unsigned int numb, int flr = -1);

	~Address();
	
	void setTown(string cidade);
	void setDistrict(string distrito);
	void setStreet(string rua);
	void setNumber(unsigned int n);
	void setFloor(int flr = -1);
	string get_town() const;
	string get_district() const;
	string get_street() const;
	unsigned int get_number() const;
	int get_floor() const;

	friend ostream & operator<<(std::ostream & stream, Address address);



};



#endif