#include "Restaurant.h"

Product::Product()
{

}

Product::Product(istream & stream) //implementar dps
{

}

Product::Product(string nm, string ct, size_t p)
{
	name = nm; 
	cuisine_type = ct;
	price = p;
}

Product::~Product()
{

}

void Product::setName(string nm)
{
	name = nm;
}

void Product::setCuisineType(string ct)
{
	cuisine_type = ct;
}

void Product::setPrice(size_t p)
{
	price = p;
}

string Product::get_name() const
{
	return name;
}

string Product::get_cuisine_type() const
{
	return cuisine_type;
}

size_t Product::get_price() const
{
	return price;
}

Restaurant::Restaurant()
{

}

Restaurant::Restaurant(istream & stream) //implementar dps
{

}

Restaurant::Restaurant(Address add, vector <string> cts, vector <Product*> ps, size_t p, Base* b)
{
	address = add;
	cuisine_types = cts;
	products = ps;
	price_average = p;
	base = b;
}

Restaurant::~Restaurant()
{

}

void Restaurant::setAddress(Address add)
{
	address = add;
}

void Restaurant::setCuisineTypes(vector <string> cts)
{
	cuisine_types = cts;
}

void Restaurant::setProducts(vector <Product*> ps)
{
	products = ps;
}

void Restaurant::setPriceAverage(size_t p)
{
	price_average = p;
}

void Restaurant::setBase(Base * b)
{
	base = b;
}

Address Restaurant::get_address() const
{
	return address;
}

vector <string> Restaurant::get_cuisine_types() const
{
	return cuisine_types;

}

vector <Product*> Restaurant::get_products() const
{
	return products;
}

size_t Restaurant::get_price_average() const
{
	return price_average;
}

Base * Restaurant::get_base() const
{
	return base;
}

void Restaurant::update_price_average() //implementar depois
{

}

void Restaurant::print_price_average() //implementar depois - não seria necessário aqui um ostream ???
{

}

void Restaurant::update_cuisine_types() //implementar depois
{

}

bool Restaurant::add_product() //implementar depois
{

}

Order::Order()
{

}

Order::Order(Base * b, Restaurant * r, Client * c, vector <Product*> p, time_t t, bool s, string message, size_t fee)
{
	base = b;
	restaurant = r;
	client = c;
	products = p;
	time = t;
	success = s;
	insuccess_message = message;
	delivery_fee = fee;
}

Order::~Order()
{

}

void Order::setBase(Base * b)
{
	base = b;
}

void Order::setRestaurant(Restaurant* r)
{
	restaurant = r;
}

void Order::setClient(Client* c)
{
	client = c;
}

void Order::setProducts(vector <Product*> p)
{
	products = p;
}


void Order::setTime(time_t t)
{
	time = t;
}

void Order::setSuccess(bool s)
{
	success = s;
}

void Order::setInsuccessMessage(string message)
{
	insuccess_message = message;
}

void Order::setDeliveryFee(size_t fee)
{
	delivery_fee = fee;
}

Base * Order::getBase() const
{
	return base;
}

Restaurant* Order::getRestaurant() const
{
	return restaurant;
}

Client* Order::getClient() const
{
	return client;
}

vector <Product*> Order::getProducts()  const
{
	return products;
}

time_t Order::getTime() const
{
	return time;
}

bool Order::getSuccess() const
{
	return success;
}

string Order::getInsuccessMessage() const
{
	return insuccess_message;
}

size_t Order::getDeliveryFee() const
{
	return delivery_fee;
}
 
bool Order::calculate_fee() //implementar depois
{

}

bool Order::calculate_time() //implementar depois
{

}