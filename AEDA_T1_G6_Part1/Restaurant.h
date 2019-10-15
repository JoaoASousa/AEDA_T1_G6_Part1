#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "date_time.h"
#include "Address.h"
#include "Base.h"
using namespace std;

//opertor overload fica em private ou public ???
//temos de ver como organizar os ficheiros em geral

class Product {
	string name;
	string cuisine_type;
	size_t price;

public:
	Product();
	Product(istream & stream);
	Product(string nm, string ct, size_t p);

	~Product();

	
	void setName(string nm);
	void setCuisineType(string ct);
	void setPrice(size_t p);
	string get_name() const;
	string get_cuisine_type() const;
	size_t get_price() const;
};

class Restaurant {
	Address address;
	vector<string> cuisine_types;
	vector<Product*> products;
	size_t price_average;
	Base * base;

public:
	Restaurant();
	Restaurant(istream & stream);
	Restaurant(Address add, vector <string> cts, vector <Product*> ps, size_t p, Base* b);

	~Restaurant();

	void setAddress(Address add);
	void setCuisineTypes(vector <string> cts);
	void setProducts(vector <Product *> ps);
	void setPriceAverage(size_t p);
	void setBase(Base* b);
	Address get_address() const;
	vector<string> get_cuisine_types() const;
	vector<Product*> get_products() const;
	size_t get_price_average() const;
	Base * get_base() const;

	void update_price_average();
	void print_price_average(); //estrelinhas
	void update_cuisine_types();
	bool add_product();

};

class Order {
	Base * base;
	Restaurant * restaurant;
	Client * client;
	vector<Product*> products;
	time_t time;
	bool success;
	string insuccess_message;
	size_t delivery_fee;

public:
	Order();
	Order(Base * b, Restaurant * r, Client * c, vector <Product*> p, time_t t, bool s, string message, size_t fee);

	~Order();

	void setBase(Base * b);
	void setRestaurant(Restaurant * r);
	void setClient(Client * c);
	void setProducts(vector <Product*> p);
	void setTime(time_t t);
	void setSuccess(bool s);
	void setInsuccessMessage(string message);
	void setDeliveryFee(size_t fee);
	Base * getBase() const;
	Restaurant* getRestaurant() const;
	Client * getClient() const;
	vector <Product*> getProducts() const;
	time_t getTime() const;
	bool getSuccess() const;
	string getInsuccessMessage() const;
	size_t getDeliveryFee()const;
	
	
	
	
	
	
	
	bool calculate_fee();
	bool calculate_time();
};

#endif