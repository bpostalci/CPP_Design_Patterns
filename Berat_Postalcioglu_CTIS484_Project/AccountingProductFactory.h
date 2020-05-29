#ifndef ACCOUNTING_PRODUCT_FACTORY_H
#define ACCOUNTING_PRODUCT_FACTORY_H

#include "AbstractProductFactory.h"
#include "ElectronicsAccounting.h"
#include "BooksAccounting.h"
#include "Smartphone.h"

class AccountingProductFactory : public AbstractProductFactory
{
public :
	AccountingProductFactory();
	~AccountingProductFactory();
	Product* create_smart_phone(const char* os, const char* brand, double price);
	Product* create_book(const char* author, const char* name, const char* publisher, int pages, double price);
};
#endif