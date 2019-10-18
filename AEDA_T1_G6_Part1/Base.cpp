#include "Base.h"


Base::Base()
{

}

Base::Base(istream & stream) {
	string temp_s;
	stream >> temp_s ; 
	district = temp_s;
	
	stream >> temp_s ; 
	address.parse(temp_s);




}

Base::~Base()
{

}

void Base::load(string path){

}

void Base::setDistrict(string d){
	district = d;
}

void Base::setAddress(Address add){
	address = add;
}

void Base::setAdmin(Admin * administrador){
	admin = administrador;
}

void Base::setClients(vector<Client*> clients){
	this->clients = clients;
}




void Base::setClients(string filename){ //em construcao
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
		cliente.setOrders(findOrders(textline)); // n sei porque � que est� a dar erro
		getline(clients_text, textline);
		clients_vec.push_back(&cliente);
	}
	clients = clients_vec;
}

void Base::setRestaurants(vector<Restaurant*> restaurants){
	this->restaurants = restaurants;
}

string Base::getDistrict() const{
	return district;
}

Address Base::getAddress() const{
	return address;
}

Admin * Base::getAdmin() const{
	for (auto & worker : workers){
		if (worker->getName())
	}
	}
}

vector<Client*> Base::getClients() const{
	return clients;
}

vector<Restaurant*> Base::getRestaurants() const{
	return restaurants;
}

vector<Base> Base::readBasesFromFile() {

	string fileLine;


}

