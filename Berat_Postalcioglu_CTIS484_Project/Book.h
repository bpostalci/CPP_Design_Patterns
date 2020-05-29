#ifndef BOOK_H
#define BOOK_H

#include "ObservableUtil.h"
#include "Product.h"
#include <string>

class Book : public Product
{
public:
	Book(const char* author, const char* name, const char* publisher, int number_of_pages, double price);
	~Book();
	const char* get_author() const;
	const char* get_name() const;
	const char* get_publisher() const;
	int get_number_of_pages() const;
	void set_author(const char* author);
	void set_name(const char* name);
	void set_publisher(const char* publisher);
	void set_number_of_pages(int pages);
	void register_observer(Observer *observer);
	void notify_observers();
	double sell();
	void out();
private:
	char *author, *name, *publisher;
	int number_of_pages;
	ObservableUtil *observable_util;
};
#endif