#include "People.h"

Vehicle::Vehicle()
{

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

Date Vehicle::get_registration_date() const
{
	return registration_date;
}

string Vehicle::get_type() const
{
	return type;
}

string Vehicle::get_brand() const
{
	return brand;
}

Person::Person()
{

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

string Person::getName() const
{
	return name;
}

size_t Person::getNIF() const
{
	return NIF;
}

void Person::print() //Implementar depois
{

}

Worker::Worker()
{
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

Date Worker::getBirthday() const
{
	return birthday;
}

size_t Worker::getWage() const
{
	return wage;
}

void Worker::print() //implementar dps
{

}

Admin::Admin()
{

}



Admin::~Admin()
{

}

void Admin::setRole(string papel)
{
	role = papel;
}

string Admin::getRole() const
{
	return role;
}

void Admin::print() //implementar dps
{

}


Delivery::Delivery()
{

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

Vehicle * Delivery::getVehicle() const
{
	return vehicle;
}

vector<Order*> Delivery::getHistory() const
{
	return history;
}

size_t Delivery::calculate_wage() //implementar dps
{

}

Client::Client()
{

}



Client::~Client()
{

}

void Client::setAddress(Address add)
{
	address = add;
}


void Client::setBase(Base * b)
{
	base = b;
}

void Client::setValue(int v = 0)
{
	value = v;
}

Address Client::getAddress() const
{
	return address;
}



Base * Client::getBase() const
{
	return base;
}

int Client::getValue() const
{
	return value;
}

void Client::print() //implementar dps
{

}