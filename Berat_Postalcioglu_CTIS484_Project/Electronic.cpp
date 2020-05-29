#include "Electronic.h"

Electronic::Electronic(const char* brand_name, double price) : Product(price)
{
	set_brand_name(brand_name);
}

Electronic::~Electronic()
{
	delete brand_name;
}

const char* Electronic::get_brand_name() const
{
	return brand_name;
}

void Electronic::set_brand_name(const char* brand_name)
{
	this->brand_name = new char[strlen(brand_name) + 1];
	strcpy(this->brand_name, brand_name);
}