#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "date_time.h"
#include "Address.h"
#include "Base.h"

//opertor overload fica em private ou public ???
//temos de ver como organizar os ficheiros em geral

class Product {
	std::string name;
	std::string cuisine_type;
	size_t price;

public:
	Product();
	Product(std::istream & stream);

	~Product();

	// std::string get_name();
	// std::string get_cuisine_type(); 
	// std::size_t get_price();
};

class Restaurant {
	Address address;
	std::vector<std::string> cuisine_types;
	std::vector<Product*> products;
	size_t price_average;
	Base * base;

public:
	Restaurant();
	Restaurant(std::istream & stream);

	~Restaurant();

	Address get_address();
	std::vector<std::string> get_cuisine_types();
	std::vector<Product*> get_products();
	size_t get_price_average();
	Base * get_base();

	void update_price_average();
	void print_price_average(); //estrelinhas
	void update_cuisine_types();
	bool add_product();

};

class Order {
	Base * base;
	Restaurant * restaurant;
	Client * client;
	std::vector<Product*> products;
	time_t time;
	bool success;
	std::string insuccess_message;
	size_t delivery_fee;

public:
	bool calculate_fee();
	bool calculate_time();
};

#endif