#include "Base.h"


Base::Base()
{

}



Base::~Base() // não sei até que ponto será necessário
{

}


void Base::setDistrict(string d)
{
	district = d;
}

void Base::setAddress(Address add)
{
	address = add;
}



void Base::setAdmin(Admin * administrador)
{
	admin = administrador;
}

void Base::setClients(vector<Client*> clients)
{
	this->clients = clients;
}

void Base::setClients(string filename) //em construcao
{
	ifstream clients_text;
	clients_text.open(filename.c_str());
	string textline;
	while (getline(clients_text, textline))
	{
		Client cliente;
		cliente.set_name(textline);
		getline(clients_text, textline);
		cliente.set_NIF(stoi(textline));
		getline(clients_text, textline);
		Address morada;
		morada.parse(textline);
		cliente.setAddress(morada);
		getline(clients_text, textline);
		cliente.setBase(textline);

	}
}

void Base::setRestaurants(vector<Restaurant*> restaurants)
{
	this->restaurants = restaurants;
}

string Base::getDistrict() const
{
	return district;
}

Address Base::getAddress() const
{
	return address;
}

Admin * Base::getAdmin() const
{
	return admin;
}

vector<Client*> Base::getClients() const
{
	return clients;
}

vector<Restaurant*> Base::getRestaurants() const
{
	return restaurants;
}


Base::Base(istream & stream) {

}

vector<Base> Base::readBasesFromFile() {

	string fileLine;


}


