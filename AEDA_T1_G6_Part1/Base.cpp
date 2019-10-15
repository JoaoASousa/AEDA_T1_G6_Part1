#include "Base.h"

Base::Base()
{

}

Base::Base(Address add, Coords coordenadas, Admin * administrador, vector<Client*> clients_vec, vector<Restaurant*> restaurants_vec)
{
	address = add;
	coords = coordenadas;
	admin = administrador;
	clients = clients_vec;
	restaurants = restaurants_vec;
}

Base::~Base() // não sei até que ponto será necessário
{

}


void Base::setAddress(Address add)
{
	address = add;
}

void Base::setCoords(Coords coordenadas)
{
	coords = coordenadas;
}

void Base::setAdmin(Admin * administrador)
{
	admin = administrador;
}

void Base::setClients(vector<Client*> clients)
{
	this->clients = clients;
}

void Base::setRestaurants(vector<Restaurant*> restaurants)
{
	this->restaurants = restaurants;
}

Address Base::getAddress() const
{
	return address;
}

Coords Base::getCoords() const
{
	return coords;
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