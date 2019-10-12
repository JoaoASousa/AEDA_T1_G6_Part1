#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include <string>

class Coords {
	double latitude;
	double longitude;
};

class Address {
	std::string town;
	std::string district;
	std::string street;
	unsigned int number;
	int floor; //if non-aplicable, =-1

public:
	Address();
	Address(std::string str);
	Address(std::string tn, std::string dstr, std::string str, unsigned int numb, int flr = -1);

	~Address();

	std::string get_town();
	std::string get_district();
	std::string get_street();
	unsigned int get_number();
	int get_floor();

	friend std::ostream & operator<<(std::ostream & stream, Address address);



};



#endif