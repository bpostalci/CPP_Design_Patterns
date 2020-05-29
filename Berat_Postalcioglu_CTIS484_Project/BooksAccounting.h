#ifndef BOOKS_ACCOUNTING_H
#define BOOKS_ACCOUNTING_H

#include "Book.h"

class BooksAccounting : public Product
{
public:
	BooksAccounting(Book *argbook);
	~BooksAccounting();
	static int get_number_of_selled_books();
	static double get_income();
	void register_observer(Observer *observer);
	void notify_observers();
	double sell();
	void out();
private:
	Book *book;
	static int number_of_selled_books;
	static double income;
	ObservableUtil *observable_util;
};
#endif