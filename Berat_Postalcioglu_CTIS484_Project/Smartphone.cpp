#include "Smartphone.h"

Smartphone::Smartphone(const char* os, const char* brand, double price) : Electronic(brand, price)
{
	set_operating_system(os);
	observable_util = new ObservableUtil(this);
}

Smartphone::~Smartphone()
{
	delete operating_system;
}

const char* Smartphone::get_operating_system() const
{
	return operating_system;
}

void Smartphone::set_operating_system(const char* os)
{
	operating_system = new char[strlen(os) + 1];
	strcpy(operating_system, os);
}

double Smartphone::sell()
{
	return get_price();
}

void Smartphone::register_observer(Observer *observer)
{
	observable_util->register_observer(observer);
}

void Smartphone::notify_observers()
{
	observable_util->notify_observers();
}

void Smartphone::out()
{
	std::cout << "operating system: " << operating_system
		<< ",id: " << get_id()
		<< ",price: " << get_price()
		<< std::endl;
}