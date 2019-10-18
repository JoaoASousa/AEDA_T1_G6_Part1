#ifndef BASE_H
#define BASE_H

#include <vector>
#include <fstream>
#include <sstream>
#include "Address.h"
#include "People.h"
#include "Restaurant.h"

#include <fstream>


using namespace std;


class Base {
private:
	string district;
	Address address;
	string admin_name; //esta aldrabado, preciso pensar em melhor alternativa
	vector<Client*> clients;
	vector<Worker*> workers;
	vector<Restaurant*> restaurants;

public:
	Base();

	~Base();

	void load(string path);
	
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




};


#endif

