#include "ElectronicsAccounting.h"

int ElectronicsAccounting::number_of_selled_electronics = 0;
double ElectronicsAccounting::income = 0.0;

ElectronicsAccounting::ElectronicsAccounting(Electronic *argelectronic)
	: electronic(argelectronic), Product(argelectronic->get_price())
{
	observable_util = new ObservableUtil(this);
}

ElectronicsAccounting::~ElectronicsAccounting()
{
	delete electronic;
	delete observable_util
}

int ElectronicsAccounting::get_number_of_selled_electronics()
{
	return number_of_selled_electronics;
}

double ElectronicsAccounting::get_income()
{
	return income;
}

void ElectronicsAccounting::register_observer(Observer *observer)
{
	observable_util->register_observer(observer);
}

void ElectronicsAccounting::notify_observers()
{
	observable_util->notify_observers();
}

double ElectronicsAccounting::sell()
{
	double price = electronic->sell();
	number_of_selled_electronics++;
	income += price;
	notify_observers();
	return price;
}

void ElectronicsAccounting::out()
{
	electronic->out();
}

