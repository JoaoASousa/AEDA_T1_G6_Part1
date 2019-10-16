#ifndef BASE_H
#define BASE_H

#include <vector>
#include <fstream>
#include "Address.h"
#include "People.h"
#include "Restaurant.h"

#include <fstream>


using namespace std;

class Base {
private:
	string district;
	Address address;
	Admin * admin;
	vector<Client*> clients;
	vector<Restaurant*> restaurants;
public:
	Base();

	~Base();
	
	void setDistrict(string d);
	void setAddress(Address add);
	void setAdmin(Admin * administrador);
	void setClients(vector<Client*> clients);
	void setClients(string filename); //ler os clientes do ficheiro de texto e tornar num vetor
	void setRestaurants(vector<Restaurant*> restaurants);
	string getDistrict() const;
	Address getAddress() const;
	Admin * getAdmin() const;
	vector<Client*> getClients() const;
	vector<Restaurant*> getRestaurants() const;

	Base(istream & stream);
	vector<Base> readBasesFromFile();

	friend Base find_base(vector <Base> bases, string d);
};

#endif

