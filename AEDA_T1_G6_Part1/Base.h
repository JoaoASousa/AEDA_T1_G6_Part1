#ifndef BASE_H
#define BASE_H

#include <vector>
#include "Address.h"
#include "People.h"

class Base {
	Address address;
	Coords coords;
	Admin * admin;
	std::vector<Client*> clients;
	std::vector<Restaurant*> restaurants;
};

#endif