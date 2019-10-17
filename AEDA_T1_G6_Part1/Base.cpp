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
	vector <Client*> clients_vec;
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
		cliente.setBase(this);
		getline(clients_text, textline);
		cliente.setOrders(findOrders(textline)); // n sei porque é que está a dar erro
		getline(clients_text, textline);
		clients_vec.push_back(&cliente);
	}
	clients = clients_vec;
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


vector <Order> findOrders(string textline) // não sei se devemos trocar de metodo de pesquisa
{
	int id;
	vector <Order> result;
	stringstream ss(textline);
	while (ss >> id)
	{
		for (int i = 0; i < orders.size(); i++)
		{
			if (id == orders[i].getID())
				result.push_back(orders[i]);
		}

	}
	return result;
}