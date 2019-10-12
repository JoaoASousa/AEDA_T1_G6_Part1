#ifndef PEOPLE_H
#define PEOPLE_H

#include "Date_time.h"
#include "Address.h"
#include "Base.h"

class Vehicle {  //ideias para funcoes para aqui??
	Date registration_date;
	std::string type;
	std::string brand;

public:
	Vehicle();
	Vehicle(std::istream & stream);

	~Vehicle();

	Date get_registration_date();
	std::string get_type();
	std::string get_brand();
};

class Person {
protected:
	std::string name;
	size_t NIF;

public:
	Person();
	Person(std::string nm, size_t nif);

	~Person();


	bool set_NIF(); // tratar da entrada ; excepcoes aqui ??
	bool set_name();

	virtual void print();

};

class Worker : public Person {
protected:
	Date birthday;
	size_t wage;

public:
	Worker();

	~Worker();

	virtual void print();
};

class Admin : public Worker {
	std::string role;

public:
	Admin();
	Admin(std::istream & stream);

	~Admin();

	void print();
};

class Delivery : public Worker {
	Vehicle * vehicle;
	std::vector<Order*> history;

public:
	Delivery();
	Delivery(std::istream & stream);

	~Delivery();

	size_t calculate_wage();
};

class Client : public Person {
	Address address;
	bool blacklisted;
	Base * base;


public:
	Client();
	Client(std::istream & stream);

	~Client();

	void print();
};



#endif
