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

	~Vehicle();

	void setRegistrationDate(Date data);
	void setType(string tipo);
	void setBrand(string marca);
	Date get_registration_date() const;
	string get_type() const;
	string get_brand() const;
};

class Person {
protected:
	string name;
	size_t NIF;

public:
	Person();

	~Person();

 // tratar da entrada ; excepcoes aqui ??
	void set_name(string nome);
	void set_NIF(size_t NIF);
	string getName() const;
	size_t getNIF() const;
	virtual void print();

};

class Worker : public Person {
protected:
	Date birthday;
	size_t wage;

public:
	Worker();

	~Worker();

	void setBirthday(Date data);
	void setWage(size_t salario);
	Date getBirthday() const;
	size_t getWage() const;

	virtual void print();
};

class Admin : public Worker {
	string role;

public:
	Admin();

	~Admin();

	void setRole(string papel);
	string getRole() const;

	void print();
};

class Delivery : public Worker {
	Vehicle * vehicle;
	vector<Order*> history;

public:
	Delivery();

	~Delivery();


	void setVehicle(Vehicle * veiculo);
	void setHistory(vector<Order*> historial);
	Vehicle * getVehicle() const;
	vector<Order*> getHistory() const;
	size_t calculate_wage();

};

class Client : public Person {
	Address address;
	Base * base;


public:
	Client();

	~Client();

	void setAddress(Address add);
	void setBlackListed(bool black);
	void setBase(Base * b);
	Address getAddress() const;
	bool getBlackListed() const;
	Base * getBase() const;

	void print();
};



#endif
