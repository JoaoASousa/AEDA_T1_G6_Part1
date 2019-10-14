#ifndef PEOPLE_H
#define PEOPLE_H

#include "Date_time.h"
#include "Address.h"
#include "Base.h"
using namespace std;

class Vehicle {  //ideias para funcoes para aqui??
	Date registration_date;
	string type;
	string brand;

public:
	Vehicle();
	Vehicle(istream & stream);
	Vehicle(Date data, string tipo, string marca);
	~Vehicle();

	void setRegistrationDate(Date data);
	void setType(string tipo);
	void setBrand(string marca);
	Date get_registration_date();
	string get_type();
	string get_brand();
};

class Person {
protected:
	string name;
	size_t NIF;

public:
	Person();
	Person(string nm, size_t nif);

	~Person();

 // tratar da entrada ; excepcoes aqui ??
	void set_name(string nome);
	void set_NIF(size_t NIF);
	string getName();
	size_t getNIF();
	virtual void print();

};

class Worker : public Person {
protected:
	Date birthday;
	size_t wage;

public:
	Worker();
	Worker(string nm, size_t nif, Date data, size_t salario);

	~Worker();

	void setBirthday(Date data);
	void setWage(size_t salario);
	Date getBirthday();
	size_t getWage();

	virtual void print();
};

class Admin : public Worker {
	string role;

public:
	Admin();
	Admin(string nm, size_t nif, Date data, size_t salario, string papel):
	Admin(istream & stream);

	~Admin();

	void setRole(string papel);
	string getRole();

	void print();
};

class Delivery : public Worker {
	Vehicle * vehicle;
	vector<Order*> history;

public:
	Delivery();
	Delivery(istream & stream);
	Delivery(string nm, size_t nif, Date data, size_t salario, Vehicle * veiculo, vector<Order*> historial);

	~Delivery();


	void setVehicle(Vehicle * veiculo);
	void setHistory(vector<Order*> historial);
	Vehicle * getVehicle();
	vector<Order*> getHistory();
	size_t calculate_wage();

};

class Client : public Person {
	Address address;
	bool blacklisted;
	Base * base;


public:
	Client();
	Client(istream & stream);
	Client(string nm, size_t nif, Address add, bool black, Base * b);

	~Client();

	void setAddress(Address add);
	void setBlackListed(bool black);
	void setBase(Base * b);
	Address getAddress();
	bool getBlackListed();
	Base * getBase();

	void print();
};



#endif
