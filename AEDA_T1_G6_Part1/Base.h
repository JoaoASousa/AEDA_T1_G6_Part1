#ifndef BASE_H
#define BASE_H

#include <vector>
#include "Address.h"
#include "People.h"
#include "Restaurant.h"
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
	Base(Address add, Coords coordenadas, Admin * administrador, vector<Client*> clients_vec, vector<Restaurant*> restaurants_vec);
	~Base();
	void setAddress(Address add);
	void setCoords(Coords coordenadas);
	void setAdmin(Admin * administrador);
	void setClients(vector<Client*> clients);
	void setRestaurants(vector<Restaurant*> restaurants);
	Address getAddress();
	Coords getCoords();
	Admin * getAdmin();
	vector<Client*> getClients();
	vector<Restaurant*> getRestaurants();

};

#endif

