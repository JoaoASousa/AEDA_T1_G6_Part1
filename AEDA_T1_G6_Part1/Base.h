#ifndef BASE_H
#define BASE_H

#include <vector>
#include "Address.h"
#include "People.h"
#include "Restaurant.h"

#include <fstream>


using namespace std;

class Base {
private:
	Address address;
	Coords coords;
	Admin * admin;
	vector<Client*> clients;
	vector<Restaurant*> restaurants;
public:
	Base();

	~Base();
	
	void setAddress(Address add);
	void setCoords(Coords coordenadas);
	void setAdmin(Admin * administrador);
	void setClients(vector<Client*> clients);
	void setRestaurants(vector<Restaurant*> restaurants);
	Address getAddress() const;
	Coords getCoords() const;
	Admin * getAdmin() const;
	vector<Client*> getClients() const;
	vector<Restaurant*> getRestaurants() const;

	Base(istream & stream);
	vector<Base> readBasesFromFile();

};

#endif

