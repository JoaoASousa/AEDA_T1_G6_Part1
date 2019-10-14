#include "People.h"

Vehicle::Vehicle()
{

}

Vehicle::Vehicle(istream & stream) //??????
{

}

Vehicle::Vehicle(Date data, string tipo, string marca)
{
	registration_date = data;
	type = tipo;
	brand = marca;
}

Vehicle::~Vehicle()
{

}

void Vehicle::setRegistrationDate(Date data)
{
	registration_date = data;

}

void Vehicle::setType(string tipo)
{
	type = tipo;
}

void Vehicle::setBrand(string marca)
{
	brand = marca;
}

Date Vehicle::get_registration_date()
{
	return registration_date;
}

string Vehicle::get_type()
{
	return type;
}

string Vehicle::get_brand()
{
	return brand;
}

Person::Person()
{

}

Person::Person(string nm, size_t nif)
{
	name = nm;
	NIF = nif;
}

Person::~Person()
{

}

void Person::set_name(string nome)
{
	name = nome;
}

void Person::set_NIF(size_t NIF)
{
	this->NIF = NIF;
}

string Person::getName()
{
	return name;
}

size_t Person::getNIF()
{
	return NIF;
}

void Person::print() //Implementar depois
{

}

Worker::Worker()
{
}

Worker::Worker(string nm, size_t nif, Date data, size_t salario) : Person(nm, nif)
{
	birthday = data;
	wage = salario;
}

Worker::~Worker()
{

}

void Worker::setBirthday(Date data)
{
	birthday = data;
}

void Worker::setWage(size_t salario)
{
	wage = salario;
}

Date Worker::getBirthday()
{
	return birthday;
}

size_t Worker::getWage()
{
	return wage;
}

void Worker::print() //implementar dps
{

}

Admin::Admin()
{

}

Admin::Admin(string nm, size_t nif, Date data, size_t salario, string papel) : Worker(nm, nif, data, salario)
{
	role = papel;
}

Admin::Admin(istream & stream) //esta merda tá a dar erro I DON´T GET IT
{

}

Admin::~Admin()
{

}

void Admin::setRole(string papel)
{
	role = papel;
}

string Admin::getRole()
{
	return role;
}

void Admin::print() //implementar dps
{

}


Delivery::Delivery()
{

}

Delivery::Delivery(istream & stream) //????
{

}

Delivery::Delivery(string nm, size_t nif, Date data, size_t salario, Vehicle * veiculo, vector <Order*> historial) : Worker(nm, nif, data, salario)
{
	vehicle = veiculo;
	history = historial;
}

Delivery::~Delivery()
{

}

void Delivery::setVehicle(Vehicle * veiculo)
{
	vehicle = veiculo;
}

void Delivery::setHistory(vector<Order*> historial)
{
	history = historial;
}

Vehicle * Delivery::getVehicle()
{
	return vehicle;
}

vector<Order*> Delivery::getHistory()
{
	return history;
}

size_t Delivery::calculate_wage() //implementar dps
{

}

Client::Client()
{

}

Client::Client(istream & stream) //?????
{

}

Client::Client(string nm, size_t nif,Address add, bool black, Base* b) : Person(nm, nif)
{
	address = add;
	blacklisted = black;
	base = b;

}

Client::~Client()
{

}

void Client::setAddress(Address add)
{
	address = add;
}

void Client::setBlackListed(bool black)
{
	blacklisted = black;
}

void Client::setBase(Base * b)
{
	base = b;
}

Address Client::getAddress()
{
	return address;
}

bool Client::getBlackListed()
{
	return blacklisted;
}

Base * Client::getBase()
{
	return base;
}

void Client::print() //implementar dps
{

}