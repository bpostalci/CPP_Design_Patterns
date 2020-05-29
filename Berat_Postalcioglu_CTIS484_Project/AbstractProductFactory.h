#ifndef ABSTRACT_PRODUCT_FACTORY_H
#define ABSTRACT_PRODUCT_FACTORY_H

#include "Product.h"

class AbstractProductFactory
{
public:
	AbstractProductFactory();
	virtual ~AbstractProductFactory();
	virtual Product* create_smart_phone(const char* os, const char* brand, double price) = 0;
	virtual Product* create_book(const char* author, const char* name, const char* publisher, int pages, double price) = 0;
};
#endif