#include "Product.h"

long Product::id_seq = 1000;

Product::Product(double price) : price(price), id(++id_seq)
{
}

Product::~Product()
{
}

long Product::get_id() const
{
	return id;
}

void Product::set_id(long id)
{
	this->id = id;
}

double Product::get_price() const
{
	return price;
}

void Product::set_price(double price)
{
	this->price = price;
}

void Product::out()
{
	std::cout << "Unnamed product..." << std::endl;
}

