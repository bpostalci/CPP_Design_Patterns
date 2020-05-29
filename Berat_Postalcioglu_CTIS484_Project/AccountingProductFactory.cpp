#include "AccountingProductFactory.h"

AccountingProductFactory::AccountingProductFactory()
{
}

AccountingProductFactory::~AccountingProductFactory()
{
}

Product* AccountingProductFactory::create_smart_phone(const char* os, const char* brand, double price)
{
	return new ElectronicsAccounting(new Smartphone(os, brand, price));
}

Product* AccountingProductFactory::create_book(const char* author, const char* name, const char* publisher, int pages, double price)
{
	return new BooksAccounting(new Book(author, name, publisher, pages, price));
}