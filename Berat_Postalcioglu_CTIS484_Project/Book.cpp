#include "Book.h"

Book::Book(const char* author, const char* name, const char* publisher, int number_of_pages, double price)
	: number_of_pages(number_of_pages), Product(price)
{
	set_author(author);
	set_name(name);
	set_publisher(publisher);
	observable_util = new ObservableUtil(this);
}

Book::~Book()
{
	delete author;
	delete name;
	delete publisher;
	delete observable_util;
}

const char* Book::get_author() const
{
	return author;
}

const char* Book::get_name() const
{
	return name;
}

const char* Book::get_publisher() const
{
	return publisher;
}

int Book::get_number_of_pages() const
{
	return number_of_pages;
}

void Book::set_author(const char* author)
{
	this->author = new char[strlen(author) + 1];
	strcpy(this->author, author);
}

void Book::set_name(const char* name)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}

void Book::set_publisher(const char* publisher)
{
	this->publisher = new char[strlen(publisher) + 1];
	strcpy(this->publisher, publisher);
}

void Book::set_number_of_pages(int pages)
{
	this->number_of_pages = pages;
}

double Book::sell()
{
	return get_price();
}

void Book::register_observer(Observer *observer)
{
	observable_util->register_observer(observer);
}

void Book::notify_observers()
{
	observable_util->notify_observers();
}

void Book::out()
{
	std::cout << "author: " << author
		<< ",id: " << get_id()
		<< ",name: " << name
		<< ",price: " << get_price()
		<< ",publisher: " << publisher
		<< ",number of pages: " << number_of_pages
		<< std::endl;
}
