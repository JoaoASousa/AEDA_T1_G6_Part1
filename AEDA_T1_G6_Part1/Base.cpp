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

Address Base::getAddress()
{
	return address;
}

Coords Base::getCoords()
{
	return coords;
}

Admin * Base::getAdmin()
{
	return admin;
}

vector<Client*> Base::getClients()
{
	return clients;
}

vector<Restaurant*> Base::getRestaurants()
{
	return restaurants;
}