#ifndef ELECTRONIC_H
#define ELECTRONIC_H

#include "Product.h"
#include <string>

class Electronic : public Product
{
public:
	Electronic(const char* brand_name, double price);
	virtual ~Electronic();
	const char* get_brand_name() const;
	void set_brand_name(const char* brand_name);
private:
	char* brand_name;
};
#endif