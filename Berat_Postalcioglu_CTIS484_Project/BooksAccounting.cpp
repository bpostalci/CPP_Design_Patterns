#include "BooksAccounting.h"

int BooksAccounting::number_of_selled_books = 0;
double BooksAccounting::income = 0.0;

BooksAccounting::BooksAccounting(Book *argbook)
	: book(argbook), Product(argbook->get_price())
{
	observable_util = new ObservableUtil(this);
}

BooksAccounting::~BooksAccounting()
{
	delete book;
	delete observable_util;
}

int BooksAccounting::get_number_of_selled_books()
{
	return number_of_selled_books;
}

double BooksAccounting::get_income()
{
	return income;
}

void BooksAccounting::register_observer(Observer *observer)
{
	observable_util->register_observer(observer);
}

void BooksAccounting::notify_observers()
{
	observable_util->notify_observers();
}

double BooksAccounting::sell()
{
	double price = book->sell();
	number_of_selled_books++;
	income += price;
	notify_observers();
	return price;
}

void BooksAccounting::out()
{
	book->out();
}
